#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t n1,result;
    printf("Enter a number:");
    scanf("%d", &n1);
    // 0x8F is hexadecimal value of 145.
    // 4th,5th and 6th bit is set to 0 then 64,32 and 16 will be 0 rest 1 = 144
    result = n1 & 0x8F;
    // to print result in interger format
    printf("[input] [output] %d %d\n", n1 , result);
    // to print result in hex format
    printf("[input] [output] 0x%x 0x%x\n", n1 , result);
   
    return 0;
}