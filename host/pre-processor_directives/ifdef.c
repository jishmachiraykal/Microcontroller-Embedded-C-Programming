#include <stdio.h>
#include <stdio.h>

#define AREA_TRI
int main()
{

#ifdef AREA_TRI // This code block will be executed only if AREA_TRI is defined in the macros
    float base, height;
    printf("Enter the area of triangle");
    fflush(stdout);
    scanf("%f%f", &base,&height);
    printf("Area of the triangle is %f\n", (0.5 * base * height));
#endif
return 0;
}