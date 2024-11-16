#include <stdio.h>

// this is a function prototype of myfunc
void myfunc(void);

int main()
{
    int my_score;
    my_score = 700;
    printf("My score is %d\n", my_score);
    // this is a function call
    myfunc();
    return 0;
}

void myfunc(void)
{
    // you cannot access my_score from main() because this is limited to that function i.e., local variable
    my_score = 710;
    printf("My score is %d\n", my_score);

}