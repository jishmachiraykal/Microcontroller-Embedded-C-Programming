#include <stdio.h>
#include <stdio.h>

int main()
{
// compilation should fail if none of the macros are defined
#if !defined(AREA_TRI) && !defined(AREA_CIR)// this will be executed when both the macros are defined using conditional AND operator
    float base, height;
    printf("Enter the area of triangle");
    fflush(stdout);
    scanf("%f%f", &base,&height);
    printf("Area of the triangle is %f\n", (0.5 * base * height));
#error "No macros defined" //no semicolon at the end. This will give compilation error when none of the macros are defined
#endif

#ifdef AREA_TRI
printf("Hello");
#endif

return 0;

}