#include <stdio.h>

int main()
{
    float n1, n2, n3, average;
    printf("Enter n1:");
    fflush(stdout); // flush is used to flush the output buffer to stdout; Its usage depends on the console you use
    scanf("%f", &n1);
    printf("Enter n2:");
    fflush(stdout);
    scanf("%f", &n2);
    printf("Enter n3:");
    fflush(stdout);
    scanf("%f", &n3);
    average= n1 + n2 + n3 / 3;
    printf("average= %f \n", average);

    return 0;

   getchar() // this will hang until the user enters any key on the keyboard
// it is used when you want to hang the program for sometime without exiting it after printf
}