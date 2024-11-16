* Pointer is nothing but memory location addresses because its point to data which is stored in the memory location

* On a 64 bit machine, pointer size is 8 bytes i.e., 64 bits

#### Operations of pointer after creating the variable:

    1. Can read the data stored in the memory location address(pointer)

    2. Write to the pointer, increment/decrement the pointer

Pointer variable def like normal variable declaration
pointer data type variable name;

This is like normal variable declaration datatype variable name == int students = 10;

* Compiler will always store 8 bytes irrespective of pointer data type. Hence pointer data type does not control the memory size. But the this decides the behavior carried out on the pointer variable
i.e.,

char* address = (char*) 0xFFF1233 == read operation of address variable yields 1 byte of data
int* address = (int*) 0xFFF1233 == read operation of address variable yields 4 byte of data
long long int* address = (long long*) 0xFFF1233 == read operation of address variable yields 8 byte of data

* char* data = char *data both are same and identical