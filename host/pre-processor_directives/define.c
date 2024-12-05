// defined operator
#include <stdio.h>
#include <stdio.h>

#define AREA_TRI
#define AREA_CIR

int main()
{
#if defined(AREA_TRI) && defined(AREA_CIR)// this will be executed when both the macros are defined using conditional AND operator
    float base, height;
    printf("Enter the area of triangle");
    fflush(stdout);
    scanf("%f%f", &base,&height);
    printf("Area of the triangle is %f\n", (0.5 * base * height));
#endif

#ifdef AREA_TRI
printf("Hello");
#endif

return 0;
}