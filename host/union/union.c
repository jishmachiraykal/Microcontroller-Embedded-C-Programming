// reducing the memory size.This can be done by bitfields
// this is useful when dealing with network fields

#include <stdio.h>
#include <stdint.h>

union Address {
    uint16_t shortAddr;
    uint32_t longAddr;
};

int main (void) {
    union Address addr;
    addr.shortAddr = 0xABCD;
    // program is littile endian so below value will be store in memory reverse i.e., CC CC EE EE
    addr.longAddr = 0xEEEECCCC;
    //shortAddr initialization will be overwritten by longAddr initialization in memory because of union
    printf("short addr= %#X\n", addr.shortAddr);
    printf("long addr= %#X\n", addr.longAddr);
}