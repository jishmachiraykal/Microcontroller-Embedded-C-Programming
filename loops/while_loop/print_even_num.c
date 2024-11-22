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

    printf("Even numbers are:\n ");

    even=0;
  while(start_number <= end_number){
        if(!(start_number % 2)){
            // \t to print numbers horizontally and %4d is width specifier and each number
            // consumes 4 spaces and result looks alligned
            printf("%4d\t", start_number);
            even++;
        }
        start_number++;
    }
    printf("\nTotal number of even numbers are %u\n",even);
    return 0;
}