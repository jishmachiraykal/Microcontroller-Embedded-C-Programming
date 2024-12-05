#include <stdio.h>
#include <stdint.h>

int main()
{
uint32_t pyramid_height;

printf("Enter the height of the pyramid:\n");
scanf("%d", &pyramid_height);

if (pyramid_height <= 0) {
        printf("The number is negative. Exiting the program.\n");
        return 0;
    }

for(uint32_t i=1;i <= pyramid_height ; i++){
    for(uint32_t j=i; j > 0;j--){
        printf("%d\t", j);
    }
    printf("\n");
}
return 0;

}