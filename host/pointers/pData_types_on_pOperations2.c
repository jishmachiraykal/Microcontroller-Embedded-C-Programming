#include <stdio.h>

long long int g_data= 0XFFFFABCD00001234;

int main()
{
   int *paddress= (int*)&g_data;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);   
   paddress= paddress + 1;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);   
   paddress= paddress + 4;
   printf("Value of paddress %p\n", paddress);
   printf("Value at address %p is %x\n", paddress,*paddress);
}