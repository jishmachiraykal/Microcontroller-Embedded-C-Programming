#include <stdio.h>

int main()
{
    char msg1[] = "Hello, How are you?";
    char *pmsg2 = "bosch.com";// there is no data copy here, its just a pointer assignment
    // pmsg2 is living in RAM pointing to flash(permanent memory)
    printf("Message msg1 is %s\n",msg1); // format specifier for string is %s
    printf("Message of pmsg2 is %s\n",pmsg2);
    printf("Address of msg1 is %p\n",&msg1);
    printf("Address of msg1 is %p\n",&pmsg2);
    printf("Value of msg1 is %p\n",msg1);
    printf("Value of msg1 is %p\n",pmsg2);
    return 0;
}