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

