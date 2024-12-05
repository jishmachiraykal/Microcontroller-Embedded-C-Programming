#include <stdio.h>
#include <stdint.h>

int main()
{
    char name[29];
    printf("Enter your name: ");
    fflush(stdout);
    scanf("%s", name);
    printf("Hello, %s",name);
    fflush(stdout);

    for(uint32_t i=0; i < 30; i++){
        printf("%x", name[i]); // here after the ASCII values 0 will be added by string itself
    }
    return 0;
}