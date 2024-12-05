//best practices while writing the macros in C along with an example
#include <stdio.h>
#include <stdio.h>

#define PI_VALUE (3.145f)
#define AREA_OF_CIRCLE(r)  ((PI_VALUE) * (r) * (r))

float r;

int main()
{
    float circle_area = AREA_OF_CIRCLE(1+3);// this will print different value than directly giving 14
    //because internally this will converted to PI_VALUE * 3+1 * 3+1. So wtite it like written in the code instead of
    PI_VALUE * r * r;
    printf("Area of circle is %f\n", circle_area);
    return 0;
}