* Structure definition:
```
struct carModel{
float car_weight;
double car_number;
uint32_t carPricey:
unit16_t carSpeed;
};
```

* Structure definition does not consume memory, its just a description

* variable of a stricture:
```
user defined data type + structure variables
struct carModel + carSuzuki, CarVW;
```

* When structure variable is created, use a .(dot) operator to access the member elements

* Usually structure definition is created in the header file, but we can also do it in main.c

* Compiler stores the variable according to the natural size boundary. Natural size boundary of int is 0, 4,8,C etc... Hence rest bits are stored with 0. This is called zero padding

* STRB= instruction to stro a byte into memory

* STR= instruction to to store word into memory

* Typedef with struct syntax:
```
typedef struct{
float car_weight;
uint32_t car_number;
uint32_t carPrice;
uint16_t carmaxSpeed;
} carmodel_t; // alias name to the structure
```

definition
```
carmodel_t carBMW, carFord;
```

```
carmodel_e ---> enum
carmodel_t ----> tydef definition
```

* A structure type cannot contain itself as a member and nested structure is allowed

* Structure definition. This does not consume memory
```
struct dataset{
char data1;
int data2;
char data3;
short data4;
};
```

* Structure variable data which consumes memory
```
struct dataset data;
```

* Dereferencing the member element when structure pointer is involved and base address of the structure variable(&data) is address of the first member element

* Accessing structure members:
    1. Use dot(.) operator when structure variable is of non pointer type
    2. Use arrow(->) operator when you use structure variable of pointer type

* Memory will be consumed when we create structure variables

* There is one to one mapping between the variable value declared with the values defined in struct definition

* In C, when an integer literal starts with a leading zero (e.g., 09189), the compiler interprets it as an octal (base-8) constant, and octal constants can only contain digits 0-7

Ex: carNumber=09189 throws error because Since 9 is not a valid octal digit, this causes the error

075: This is an octal number. In base 8, 75 represents 7×81+5×80=617 \times 8^1 + 5 \times 8^0 = 617×81+5×80=61 in decimal.

017: In octal, 17 represents 1×81+7×80=151 \times 8^1 + 7 \times 8^0 = 151×81+7×80=15 in decimal.

0347: In octal, 347 represents 3×82+4×81+7×80=2313 \times 8^2 + 4 \times 8^1 + 7 \times 8^0 = 2313×82+4×81+7×80=231 in decimal

* structure variable assignation 
    Syntax: structurevariable.member element
    Ex: carVE.carMaxspeed

* Natural size boundary of char data type is 1 byte
Which means char type memory will be stored in the addresses which end with 1,2 3,4 and short type memory will be stored in the addresses which end with 0,2,4,6,8,A

This make the compiler to store the variable in their natural size boundary and this is called aligned data

* char can be stored in any place

* If data is stored in aligned fashion, then read write operation becomes easy and less instruction will be generated and hence this reduces code size. Disadvantage with aligned is it looses memory

* If we use packed structure, instead of one STR(for int), it actually stores 4 STR's. Now the processor is talking to memory 4 times, we loose clock cycles

* enum (enumeration) and typedef are used to define new types, but they serve different purposes

* Enum: Used to define a set of named integer constants. It improves readability when you need to use a set of related values (e.g., days of the week, states, etc.)

* Typedef: Creates a new alias for an existing type. This makes your code cleaner and reduces verbosity, especially for complex types like struct or pointer types

* Structure types can contain pointers to their own type.
Ex: 
```
struct Car{
struct Car *pcarFO; //allowed
struct Car  carFO; // not allowed
};
```

* Base address of structure variable is also the address of the first member element

