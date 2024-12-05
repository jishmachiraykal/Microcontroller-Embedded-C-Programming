#include <stdio.h>
#include <stdint.h>

struct dataset{
  char data1;
  int data2;
  char data3;
  short data4;
};

int main()
{ 
    struct dataset data; // this consumes 12 bytes in memory (RAM)
    data.data1=0x11;
    data.data2=0xFFFFEEEE;
    data.data3=0x22;
    data.data4=0xABCD;
    uint8_t *ptr;
    ptr= (uint8_t)&data; // data entity of this data is struct data, so typecasting
    uint32_t totalsize= sizeof(struct dataset);
    printf("Memory address           Content\n");
    for(uint32_t i=0;i<totalsize;i++){
        printf("%p       %X\n", ptr, *ptr);
        ptr++;
    }
    printf("Total memory consumed by struct variable is %I64u\n", sizeof(struct dataset));
    getchar();
}