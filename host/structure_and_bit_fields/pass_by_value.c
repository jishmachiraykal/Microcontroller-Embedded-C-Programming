#include <stdio.h>
#include <stdint.h>

struct dataset{
  char data1;
  int data2;
  char data3;
  short data4;
};

void displaymemberelements(struct dataset data);
int main()
{
    struct dataset data; // this consumes 12 bytes in memory (RAM)
    data.data1=0x11;
    data.data2=0xFFFFEEEE;
    data.data3=0x22;
    data.data4=0xABCD;
    displaymemberelements(data);
}

void displaymemberelements(struct dataset data){
    printf("data1=%X\n",data.data1);
    printf("data2=%X\n",data.data2);
    printf("data3=%X\n",data.data3);
    printf("data4=%X\n",data.data4);
}