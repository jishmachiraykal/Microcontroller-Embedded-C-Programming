// finding even or odd using testing of bits
#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t n1;
    printf("Enter the number:");
    scanf("%d", &n1);

    if(n1 & 1){
        printf("%d is an odd number\n", n1);
    }

    else{
        printf("%d is an even number\n",n1);
    }
    // using ternary operator
    //(n1 & 1) ? printf("%d is an odd number\n", n1):printf("%d is an even number\n",n1);
    return 0;
}