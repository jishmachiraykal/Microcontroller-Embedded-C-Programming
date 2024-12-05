#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s", name); // reads everything until there is a new line
    printf("Hello, %s", name);
    
    return 0;
}