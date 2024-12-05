#include<stdio.h>
#include<stdint.h>

int main(){
    uint8_t Data[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
    //uint8_t Data[10] = {0xff,0xff}; this is also valid, for rest of the array item value will be zero ;
    //uint8_t Data[10] = {0xff,0xff}; this is equivalent to uint8_t Data[2] = {0xff,0xff};
    // so we are declaring and initializing array in single line, then need not to mention the array length

    // Read and write operation on array
    printf("Second data item before %#x\n",(Data+1));
    Data[1] = 0x08;// this is also same as that of previous one (Data+1)= 0x08;
    printf("Second data item after %#x\n",(Data+1));

    // priting values of all the data item
    printf("Contents of the array\n");

    for(uint32_t i=0; i < 10; i++){
        printf("%x\t",Data[i]);
    }
}