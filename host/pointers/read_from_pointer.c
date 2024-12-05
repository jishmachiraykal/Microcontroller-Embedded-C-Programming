//read from the pointer:
#include <stdio.h>

int main()
{
   char* address = (char*) 0xFF09988991233; // here (char*) is used to make typecasting otherwise compiler
   // this as a number and won't treat it as a pointer
   char value = *address; // this is called derefencing in order to read data from address variable
   printf("Data stored inside pointer variable is %c ", value);
}