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