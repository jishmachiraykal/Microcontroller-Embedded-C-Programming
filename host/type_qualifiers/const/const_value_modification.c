//modifying const value using address
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t const n1 = 10;
    printf("n1: %d\n",n1);
    uint8_t *ptr = (uint8_t*)&n1;
    *ptr= 100;
    printf("n1: %d\n",n1);

    return 0;
}