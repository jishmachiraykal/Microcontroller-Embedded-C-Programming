```
uint8_t const data =10;
```
data1 is a constant(read-only) variable of type unsigned int

* Using const type qualifier we cannot change the content of the variable using its name, but we can modify the content of the variale by using its address

* const is a type qualifier in C used to make variables read only
uint8_t const n1=1000; or const uint8_t n1=1000; both are same
here n1 cannot be modified because n1 is read only

* Using const, we cannot modify the content of the variable using its name, but can be modified using its address

* local const variables stored like non-const variables in RAM and global const variables are stored in ROM.

* In STM32, global variables are stored in FLASH and it is write protected. For example if you try to
modify the below code and make const global variable, code will be crashed.
Code:

```
#include <stdio.h>
#include <stdint.h>

///In STM32, global variables are stored in FLASH and it is write protected.

//For example if you try to modify the below code and make const global variable, code will be crashed
uint8_t const n1 = 10;
int main()
{
    printf("n1: %d\n",n1);
    uint8_t *ptr = (uint8_t*)&n1;
    *ptr= 100;
    printf("n1: %d\n",n1);
    
    return 0;
}
```

* Use cases 1: To define mathematical constants in the program
fload const pi=3.14

uint8_t const number_of_months=12;

* Use case2:modifiable pointer and constant data

uint8_t const *pData = (uint8_t *) 0x40000000;
allowed:

    pData = (uint8_t *) 0x90000000;
    pData = (uint8_t *) 0x70000000;
not allowed:
    *pData=89;

* Use case3: modifiable data and constant pointer:

uint8_t *const pData = (uint8_t *) 0x40000000;
Allowed:
    *pdata=799;

not allowed:
    pdata=(uint8_t*) 0x6000000;

* Usecase 4: const data and const pointer
    uint8_t const *const pData = (uint8_t) 0x20000000;

* Use this syntax if the other syntax confuses you when studying about applicability of const:

    1. int* const ptr = &x;:
    Constant pointer to non-constant data (int)
    You cannot change the pointer (ptr), but the data it points to (*ptr) can be modified

    2. const int* ptr = &x;:
    Pointer to constant data (int).
    You can change the pointer (ptr), but you cannot modify the data it points to (*ptr).

    3. const int* const ptr = &x;
    Constant Variables like mathematical variable pi(3.145)

