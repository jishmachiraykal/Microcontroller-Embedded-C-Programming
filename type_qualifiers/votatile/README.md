#### Type qualifiers in C"

    1. const 
    2. volatile

#### When to use volatile qualifier

    1. Memory mapped peripheral registers of the microcontroller

    2. Multilple task accessing global variable(read/write) in an RTOS multithread application

    3. Whena global variable is used to share data between main code and an ISR code

#### Use cases of volatile data

    1. Voltatile data

    2. Non-volatile pointer to volatile data

    3. volatile pointer to non-volatile data

    4. Volatile pointer to volatile data

* Use volatiles when you are operating on memory mapped registers

```
uint8_t const volatile *const pReg = ( uint8_t*) 0x40000
```
Here, data pointed by 0x40000 address is volatile i.e., subjected to optimization but programmer must not change this

*  Use const volatile for read only memory address