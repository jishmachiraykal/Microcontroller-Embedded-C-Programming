//program to print number from 1 - 10:
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t n1=1;
    while(n1 <= 10){
    printf("%d\n",n1);
    // both are same
    //printf("%d\n",n1++);
    n1++;
    }
    return 0;

}