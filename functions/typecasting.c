#include <stdio.h>

int main()
{
    // unsigned char on rhs is typecasted to avoid the data loss during warning and also to get the exact result
    // because 0x87 will be considered as 4 byte data instead of 1 as int data type and same for 0xFF00 as 4 byte data instead if two bytes
    unsigned char result = (unsigned char) (0x87 + 0xFF00);
    // float is given in order to get the real numbers instead of whole number. And float of numerator/int of denominator results in
    // float value itself as implicit casting
    float div_result = (float) 13/2;
    printf("Result:%d\nDivision Result= %f\n ",result, div_result);
   
    return 0;
}