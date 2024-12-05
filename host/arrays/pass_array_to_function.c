#include<stdio.h>
#include<stdint.h>

void display_array(uint8_t const *const pArray, uint8_t nItems);

int main(){
    uint8_t Data[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
    // datatype of Data is uint8_t*, hence passing pointer to display_array fn

    for(uint32_t i=0; i < 10; i++){
        Data[i] = i;
    }

    uint8_t nItems= sizeof(Data)/ sizeof(uint8_t); // i.e., 10/1
    display_array((Data+2), nItems-2); // Data+2 will print the values from 2nd position and nItems to get rid of array out of boundary error
    //(Data+2) is equivalent to &Data[2]
}

void display_array(uint8_t const *const pArray, uint8_t nItems){ // this is display function and it should not modify the value
// hence const is given and also we should not modify the given address so second const is given
   
    for(uint32_t i=0; i < nItems; i++){
        printf("%x\t",pArray[i]);
    }
}