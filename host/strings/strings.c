#include <stdio.h>

int main()
{
    char msg1[] = "Hello, How are you?";
    printf("Message is %s\n",msg1); // format specifier for string is %s
    printf("Address of msg1 is %p\n",&msg1);
    printf("Value of msg1 is %p\n",msg1);
    return 0;
}