#include <stdio.h>
#include <stdint.h>

tydef struct{
  char data1;
  int data2;
  char data3;
  short data4;
}dataset_t;

dataset_t data;

int main()
{
    data.data1=0x11;
    data.data2=0xFFFFEEEE;
    data.data3=0x22;
    data.data4=0xABCD;

    printf("Data of data1 = %d\n", data.data1);
    printf("Data of data2 = %d\n", data.data2);
    printf("Data of data3 = %d\n", data.data3);
    printf("Data of data4 = %d\n", data.data4);
}