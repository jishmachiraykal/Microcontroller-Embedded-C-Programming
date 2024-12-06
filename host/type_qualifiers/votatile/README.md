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

* Volatile tells the compiler that variale may change at any time with or without the programmer's consent. So the compiler turns off optimizing read-write operation on variables which are declared using volatile keyword

* When to use volatile qualifier:
    1. Memory mapped peripheral registers of the uc
    2. Multiple tasks accessing global variables(read/write) in an RTOS multithreaded application
    3. When a global variable is used to share data between the main code and an ISR code

* In embedded systems programming, memory-mapped peripherals refer to the technique of accessing hardware devices (such as sensors, timers, communication modules, etc.) by reading and writing specific memory addresses. These peripherals are mapped into the address space of the processor, so you can interact with them using standard memory access operations like *ptr = value; or value = *ptr;, just as you would access regular variables in memory

* As a rule of thumb make all memory mapped registers volatile

* Make i in the for loop volatile, here the loop is empty loop. Compiler thinks this is not used anywhere and can be optimized. Optimizing this would break the application

* Usage of const and volatile together:

```
uint8_t const volatile *const *pReg = (uint8_t) 0x40000000;
```

Here pReg is a const pointer pointing to volatile const data of type uint8_t, which means the data pointed by 0x40000000 address is volatile i.e., it may be subjected to changes, but the programmer must not change the data pointed by this address. The changes may come from the external devices (protocol, network or user pressing the button

Const here is for the programmer to not change the value and volatile is for the compiler to tell not to optimize(read/write) operations on this address

Use case for this: Input data register of a peripheral or a shared memory from which we are supposed to read only

