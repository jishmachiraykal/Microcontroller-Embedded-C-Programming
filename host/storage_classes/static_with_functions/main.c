//static keyword use in functions:

#include <stdio.h>

// this variable is private to main.c
static int my_private_data;

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

static void total_fruits(int fruits_collected)
{
    printf("Total number of fruits collected from farm is %d\n",fruits_collected);
}