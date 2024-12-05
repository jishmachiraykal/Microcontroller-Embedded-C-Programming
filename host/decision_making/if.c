#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age);
    if(age>= 18)

    {
        printf("User can vote");
    }

    if(age<18)
    {
        printf("User cannot vote as minimum age for voting is 18");
    }
}
//here only if statement is used 2 times because the exercise it is do it with only if statement