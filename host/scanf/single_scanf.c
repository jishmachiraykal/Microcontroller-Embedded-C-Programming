//usage of single scanf instead of multiple scanf's
#include <stdio.h>

int main()
{
    float n1, n2, n3, average;  
    printf("Enter n1,n2 and n3: ");
    scanf("%f %f %f", &n1,&n2,&n3);
    average= n1 + n2 + n3 / 3;
    printf("average= %f \n", average);
    printf("Press enter to exit the application");   

  while (getchar() != '\n')
    {    

    }
    getchar();

    return 0;
}