#include <stdio.h>

// this is a function prototype of myfun
void myfunc(void);

int my_score;

int main()
{
    my_score = 700;
    printf("My score is %d\n", my_score);
    // this is a function call
    myfunc();
    return 0;
}

void myfunc(void)
{
   // you can now access my_score from main() because this is not limited to that function i.e., global variable
    my_score = 710;
    printf("My score is %d\n", my_score);
}