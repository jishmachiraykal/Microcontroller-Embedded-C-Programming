//write a program which takes 6 characters from user and print the ascii codes of the entered characters:
#include <stdio.h>

int main()
{
    char c1,c2,c3,c4,c5,c6;
    printf("Enter 6 characters: ");
    scanf("%c %c %c %c %c %c", &c1,&c2,&c3,&c4,&c4,&c6);
    printf("ascii code = %u,%u,%u,%u,%u,%u \n", c1,c2,c3,c4,c5,c6);
    printf("printf enter key to exit the function");
    
    while (getchar() != '\n')
    {  

    }

    getchar();

    return 0;
}

