//returning from function example:
#include <stdio.h>

int add_numbers(int a, int b, int c);

// this function is the caller
int main()
{
    //int ret_value = add_numbers(22, 15, 11);
    printf("Sum = %d\n",add_numbers(22, 15, 11));
    
    return 0;
}

// and this is the calling function
int add_numbers(int a, int b, int c)
{
    int sum=a+b+c;
    // since we are returning here, so return data type of this function needs to be changes to int and not void
    
    return sum;
}