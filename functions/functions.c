#include <stdio.h>

//function prototype, here just int, int , int can be given without int a, int b, int c also
void add_numbers(int a, int b, int c);

int main()
{
    int first_number= 2, second_number=11;
    add_numbers(25,35,90);
    add_numbers(-1,1,0);
    add_numbers(first_number, second_number, -89);

    return 0;
}

// this is the function definition
void add_numbers(int a, int b, int c)
{
    int sum = a+b+c;
    printf("Sum = %d\n",sum);
}