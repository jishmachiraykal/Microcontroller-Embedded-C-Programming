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
    uint8_t *ptr= (uint8_t)&data; // data entity of this data is struct data, so typecasting
    printf("Data1 before modification is %X\n", data.data1);// printing in hex format
    struct dataset *pdata;
    pdata = &data;
    // modify the first element.
    pdata->data1 =0x55;
    printf("Data1 after modification is %X\n", data.data1);
}