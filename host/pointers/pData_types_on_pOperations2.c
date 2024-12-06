#include <stdio.h>

long long int g_data= 0XFFFFABCD00001234;

int main()
{
   int *paddress= (int*)&g_data;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);   
   paddress= paddress + 1;//memory location(address) will be incremented by 4 and that fetched next 4 bytes
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);   
   paddress= paddress + 4;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);
}