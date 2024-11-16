//handling program if user enters character:
#include <stdio.h>

int main()
{
    float number1,number2;
    printf("Enter two numbers: ");
    if(scanf("%f %f", &number1, &number2) == 0){
        printf("Invalid input exiting...");
        return 0;
    }
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

while (getchar() != '\n')

    {  }

getchar();

return 0;
}