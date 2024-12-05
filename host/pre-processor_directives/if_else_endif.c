#include <stdio.h>
#include <stdio.h>

int main()
{
// this preprocessor directive will try to not execute till endif during build
// this is mostly like commenting out something that in a better way
// so the code inside if and endif will not be executed
// change it to 1 if you want to execute that part of the code execution
#if 0
printf("Area of circle is %f\n", circle_area);
#else
printf("Hello"); // this will be executed if is 0, if is 1 then code inside #if will be executed
#endif
return 0;
}