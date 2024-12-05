#include <stdio.h>
#include <stdio.h>

int main()
{
// this preprocessor directive will try to not execute till endif during build
// this is mostly like commenting out something that in a better way
// so the code inside if and endif will not be executed

#if 0
printf("Area of circle is %f\n", circle_area);
#endif
return 0;
}