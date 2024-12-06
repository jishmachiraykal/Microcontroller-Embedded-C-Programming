//using pointer address we cannot modify the content of the global variable because this will be stored in FLASH memory and it is write protected. Therefore we need to use const as a guard to our data
#include <stdio.h>

#include <stdint.h>

uint32_t const data=1;

int main()
{
    //uint32_t const data=1;
    printf("Data = %d\n", data);
    uint32_t* ptr=(uint32_t*) &data;
    *ptr= 99;
    printf("Data = %d\n", data);

return 0;

}