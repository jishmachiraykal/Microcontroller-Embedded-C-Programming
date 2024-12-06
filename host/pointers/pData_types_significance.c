#include <stdio.h>

long long int g_data= 0XFFFFABCD00001234;

int main()
{
   char *paddress1= (char*)&g_data;
   printf("Value at address %p is %x \n", paddress1,*paddress1);

   // this is when you want to read 1 byte data from pointer
   int *paddress2= (int*)&g_data;

   printf("Value at address %p is %x \n", paddress2,*paddress2);
   // this is when you want to read 4 bytes data from pointer
}