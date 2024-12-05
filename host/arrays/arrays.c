#include<stdio.h>
#include<stdint.h>

int main(void){
    uint32_t studentsAge[1000];
    printf("Size of an array is %u\n", sizeof(studentsAge));
    printf("Base address of the array = %p\n", studentsAge);
}