//using pointer we can modify the content of the local variable

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t const data=1;
    //uint32_t const data=1;
    printf("Data = %d\n", data);
    uint32_t* ptr=(uint32_t*) &data;
    *ptr= 99;
    printf("Data = %d\n", data);

return 0;
}