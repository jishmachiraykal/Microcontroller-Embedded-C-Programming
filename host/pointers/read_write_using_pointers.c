#include <stdio.h>

int main()
{
   char data = 100;
   printf("Value of data is : %d\n", data);
   printf("Address of data is : %p\n", &data); // %data = address and %p is used to print the address of pointer
   // create a pointer variable and store the address of data variable
   char *pdata= &data;
   char value= *pdata;
   printf("Read value is %d\n", value);
   *pdata= 65;
   printf("Value of data is : %d\n", data);
}

