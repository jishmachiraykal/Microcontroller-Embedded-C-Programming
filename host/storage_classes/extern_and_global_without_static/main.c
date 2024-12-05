// Use of extern keyword and usage of global variable without static keyword:
#include <stdio.h>

// this variable is private to main.c
int my_private_data;

// function prototype
void myfunc1(void);

int main()
{
    my_private_data = 10;
    printf("My private data is %d\n",my_private_data );
    myfunc1();
    printf("My private data is %d\n",my_private_data );

    return 0;
}