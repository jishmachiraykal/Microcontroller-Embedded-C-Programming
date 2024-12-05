#include <stdio.h>

void myfunc(void);

int main()
{
    myfunc();
    myfunc();
    myfunc();
    myfunc();
    myfunc();

    return 0;

}

void myfunc(void)
{
    // here static keyword will make count variable global but only can be used within the myfunc
    static int count = 0;
    count = count + 1;
    printf("Function myfunc is executed %d time(s)\n", count);
}