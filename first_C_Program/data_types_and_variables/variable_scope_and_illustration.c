#include <stdio.h>

int a;

int main()
{
    a = 10;
    {
        int b = 20;
        printf("Value of variable a is %d\n",a);
        printf("Value of variable b is %d\n",b);
    }
    /* here b will be again set with the new value and the previous b is not present now. Hence b + 10 will have some garbage value */
    int b = b + 10;
    printf("Value of variable b is %d\n", b);

   return 0;
}