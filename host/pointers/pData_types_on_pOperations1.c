#include <stdio.h>

long long int g_data= 0XFFFFABCD00001234;

int main()
{
   char *paddress= (char*)&g_data;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);
   // when paddress was deferenced and incremented by 1 this will be moved and shifted no next byte
   // and also notice the change in the address in the result
   paddress= paddress + 1;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);
   paddress= paddress + 4;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);

}