* In C, printf cannot be used outside the function. printf is a function implemented by C

General form of function:
```
return_data_type function_name(parameters_list) --> prototype of the function
{

body of the function

}
```

* Main function return type should always be int as per C standard

* Make sure header files contain include guards, otherwise write it off

#### Type casting
* Two types of casting
  1. Implicit casting (compiler does this)
  2. Explicit casting (programmer does this)

```
unsigned char data = 0x87 + 0xFF00
```
Here 0x87 is one byte data for us and for compiler it is of int type hence 4 bytes
This is called integer promotion

0x1234 -- 2 byte data
0x112233446677 -- 6 byte data

* main function takes only 0 or 2 arguments and parameters passed to func is also local variable which has local scope

* float result = 80/3 = integer/interger results in integer and results in 26.0000
Therefore do explicit type casting to store the real number ---> float result = (float) 80/3;
Here numerator is float, hence compiler treats denominator as float implicitly

* Note:
C code: unsigned char data = (unsigned char)0x1111FFFF + 0x1234; Warning: unsigned conversion from ‘int’ to ‘unsigned char’ changes value from ‘4915’ to ‘51’ [-Woverflow]

Reason: The warning occurs because the result of the addition exceeds the size of an unsigned char, and the typecast truncates the result to the lower 8 bits. You need to either ensure that the value fits within the range of unsigned char (by using bitwise operations or modulo) or change the type of data to a larger type (like unsigned int) to hold the full value.