//handling if the user enters real number instead of integer
#include <stdio.h>

int main()
{
    float number1,number2;
    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);
    //storing only the interger part of the real number
    int n1, n2;
    n1=number1;
    n2=number2;
    if(n1 != number1 || n2 !=number2){
       printf("Warning: comparing only interger\n");
    }
    if(n1==n2){
        printf("numbers are equal\n");
    }else

    {
        if(n1>n2){
          printf("%d is bigger\n", n1);
        }else{
            printf("%d is bigger\n", n2);
        }
    }
}