#include <stdio.h>

int main()
{
    char* address = (char*) 0xFFF1233; // here (char*) is used to make typecasting otherwise compiler
// this as a number and won't treat it as a pointer
// compiler allocates 8 bytes for this variable(address) to store pointer(0xFFF1233)

}