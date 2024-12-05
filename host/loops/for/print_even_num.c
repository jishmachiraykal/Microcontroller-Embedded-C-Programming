//print even numbers using for loop
#include <stdio.h>
#include <stdint.h>

int main()
{
int32_t start_number, end_number;
uint32_t even;

printf("Enter starting and ending numbers:\n");
scanf("%d %d", &start_number,&end_number);

if (end_number < start_number ){
printf("Ending number should be greater than starting number\n");
}
// it is fine to put printf in the first block following variable initialization
// anyways block1 will be executed only once

for(printf("Even numbers are:\n "), even=0;start_number <= end_number ; start_number++){
    if(!(start_number % 2)){

        printf("%d\t", start_number);
        even++;
    }

}

printf("\nTotal number of even numbers are %u\n",even);

return 0;
}