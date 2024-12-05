#include <stdio.h>

int main()
{
    int number1,number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if(number1==number2){
        printf("numbers are equal");
    }else

    {
        if(number1>number2){

            printf("%d is bigger\n", number1);

        }else{

            printf("%d is bigger\n", number2);
        }
    }
}