#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d", &n1, &n2);
    printf("Bitwise AND(&) :%d\n", (n1 & n2));
    printf("Bitwise OR(|) :%d\n", (n1 | n2));
    printf("Bitwise XOR(^) :%d\n", (n1 ^ n2));
    printf("Bitwise NOT(~) :%d\n", (~n1));

    return 0;
}
