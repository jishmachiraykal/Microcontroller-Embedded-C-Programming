#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t n1,result;
    printf("Enter a number:");
    scanf("%d", &n1);
    /* 0x90 is hexadecimal value of 144.
    mask value for setting 4th and 7th bits: 1 0 0 1 0 0 0 0
    and if we split into 2:
    1. 0  0 0  0 =  0
    2. 1  0  0  1 =  9
    Therefore it is 0x90
    4th and 7th bit is set to 1 then 128 and 16 will be set = 144*/
    result = n1 | 0x90;
    // to print result in interger format
    printf("[input] [output] %d %d\n", n1 , result);
    // to print result in hex format
    printf("[input] [output] 0x%x 0x%x\n", n1 , result);
    return 0;

}