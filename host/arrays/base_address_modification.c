//modifying the data using base address of 2nd element:
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t data[10]= {0xff,1,2};
    printf("First element of this array:%X\n", data[1]);
    *(data+1)=46;
    printf("After modification:%X\n", data[1]);
    return 0;
}