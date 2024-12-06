#### Pre-processor directives in C:

    1.Macros: Textual replacement for numbers and other things (#define)
    2.File inclusion: Used for file inclusion like headers
    3.Conditional compilation: Used to direct the compiler about code compilation
    4.Others:

* If we are using any identifier in many places defining it using macros: 
#define MIN AGE 18
so MIN AGE identifier/macro name can be used anywhere just by changing the value in one place
MIN AGE is not an variable and an identifier or macro name
Just a textual replacement for a number

* Function like macro: 
#define AREA_OF_CIRCLE(r) PI_VALUE * r * r

Internally  AREA_OF_CIRCLE(r) = PI_VALUE * r * r;
PI_VALUE * r * r = 3.145*r*r;

* Syntax for #if and #endif directive:
```
#if <constant expression>
// code block
#endif
```
If the constant expression is 0 then code block will not be executed and if it is non zero, the code block will be included for the code compilation

* To undefine the macros which are defined, use #undefine if both macros are in different files

* In order to display the warning instead of compilation error use #warning

* #ifdef checks whether the identifier is defined in the program or not. Ex: #ifdef AGE, if AGE is defined in the program, then the code block inside ifdef will be executed
Syntax:
```
#ifdef <identifier> // not constant expression
```

* Pre-processor directives are used to affect compile time settings  and are also used to create macros as a textual replacement for numbers and other things

* Pre-processor directives are resolved or taken cared during the pre-processing stage of the compilation

* #define PI 3.145f
If there is no f after the value then compiler will treat it as double

* comments are generally used to given description of the code, so generally using comments to exclude the code is not a good idea instead use conditional compilation directives

* #if 0/1 --> it should be a constant expression

* #define DELAY_COUNT 3000UL, this is unsigned long int, otherwise this will be considered as int and also it is better to safeguard the values using parenthesis i.e., #define DELAY_COUNT (3000UL)