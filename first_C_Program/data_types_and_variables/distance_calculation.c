#include <stdio.h>

int main()
{
    unsigned char distance_A2B = 160;
    unsigned char distance_B2C = 40;
    unsigned char distance_A2C;

    distance_A2C = distance_A2B + distance_B2C;
    printf("Distance from A2C is %d km \n", distance_A2C);
   /* or this can also be written as printf("%d km is the distance from A2C", distance_A2C);

    here %d is the format specifier for int(%u can also be used as it is unsigned int char)

    and this can be used anywhere inside the printf message within the double quotes and this 

    has to be followed by a arguement i.e., variable here*/
    
    return 0;
}