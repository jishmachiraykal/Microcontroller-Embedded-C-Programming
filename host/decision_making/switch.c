#include <stdio.h>
#include <stdint.h>

int main()
{
   int8_t code;
   float a,r,b,h,area;
   printf("Area calculation program\n");
   printf("Code for circle --> c\n");
   printf("Code for square --> s\n");
   printf("Code for trapezoid --> trapezoid\n");
   printf("Code for triangle --> t\n");
   printf("Enter the code: ");
   scanf("%c",&code);  
   switch(code){
   //since we cannot use c directly as this is not an interger. Use 'c' inside single quote to get the ASCII value
    case 'c':
    printf("Circle area calculation\n");
    printf("Enter radius(r): ");
    scanf("%f",&r);

    if(r<0){
        printf("radius cannot be negative");
        area=-1;
    }else{
    area= 3.14 * r * r;
    }

    break;
case 't':

    printf("Trianle area calculation\n");
    printf("Enter base(b) : ");
    scanf("%f",&b);
    printf("Enterheight(h) : ");
    scanf("%f",&h);

    if(b<0 || h<0){
    printf("base or height cannot be negative");
    area=-1;
    }else{
    area= 0.5 * b * h;
    }
    break;
    case 'z':
    printf("Trapezoid area calculation\n");
    printf("Enter base1(a) : ");
    scanf("%f",&a);
    printf("Enter base1(b) : ");
    scanf("%f",&b);
    printf("Enter height(h) : ");
    scanf("%f",&h);

    if(a<0 || b<0 || h<0){
    printf("base or height cannot be negative");
    area=-1;
    }else{
    area= ((a+b)/2) + h;
    }
    break;
case 's':
    printf("Square area calculation\n");
    printf("Enter side(a) : ");
    scanf("%f",&a);

    if(a<0){
        printf("side cannot be negative");
        area=-1;
    }else{
    area= a * a;
    }
    break;
    default:
    printf("Invalid input\n");
    area=-1;
   }//end of body of switch

   if(!(area<0)){
    printf("Area = %f", area);
   }
}