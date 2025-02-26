//read from the pointer:
#include <stdio.h>

int main()
{
   int data = 42;
   int* address = &data;  // address now points to a valid memory location
   int value = *address;  // this is safe
   printf("Data stored inside pointer variable is %d", value);
}