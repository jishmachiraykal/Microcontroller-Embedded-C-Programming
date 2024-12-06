* An array in C is a collection of data of the same datatype

* Syntax: uint8_t studentsAge[100];
Here studentsAge is a reference or an array variable or a pointer. Hence data type of studentsAge is uint8_t* and not uint8_t and data type of items stored in uint8_t

* Data item will be stored in contiguous memory location in the memory which means if we know the base address of the array, then we can manipulate any data in the memory

```
uint8_t studentsAge[100];
```

Here studentsAge is a base pointer or a reference to 100 data items of type uint8_t. Therefore data type of studentsAge is unit8_t* and not uint8_t but the data type of the items stored is uint8_t

* Note: If there is any warning related to data type while using sizeof operator, use %z format specifier. It is designed to work with size_t values, ensuring that the size is correctly handled for both 32-bit and 64-bit systems

```
    uint32_t studentsAge[100];
    printf("Size of this array:%zu\n", sizeof(studentsAge));
    printf("Base address of array= %p\n", studentsAge);
```
This base address is the address of the first data item of the array

* uint8_t data[10]= {0xff,1,2};
Here first 3 items will be assigned with 0xff,1,2 and remaining elements will be assigned with value 0
To print the value of 1st element: printf("First element of this array:%X\n", data[0]);

* uint8_t data[] = {0xff,0x12} --> this is also valid and compiler considers this as an array of 2 data items

But this is not allowed: uint8_t data[]; // only array definition without no.of data items
Variable can also be used to define the array size as per C99 standard.
Ex: int n1=10;
int data[n1]={0,90};

* Instead of *(data+1)=46;, we can also do this: data[2]=46; to modify the second element

* &data[i] can be used to print data item from a particular index