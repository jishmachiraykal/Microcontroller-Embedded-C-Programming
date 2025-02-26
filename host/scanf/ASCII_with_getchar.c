// writing ascii code using getchar instead of scanf:
#include<stdio.h>

int main(void)
{
    char c1,c2,c3;
    printf("Enter any 6 characters of your choice \n");
    c1 = getchar();
    getchar(); //this getchar is used to clear the special character
    c2 = getchar();
    getchar(); //this getchar is used to clear the special character
    c3 = getchar();
    getchar(); //this getchar is used to clear the special character
    printf("\nASCII codes : %u,%u,%u",c1,c2,c3);
    printf("\nPress enter key to exit the application \n");

    while(getchar() != '\n')
    {
    //just read the input buffer and do nothing
    }

    getchar(); //after the loop finishes and the newline character is encountered, this getchar() reads and discards the next character that remains in the input buffer (typically, any extra newline character left behind when the user presses "Enter")
}