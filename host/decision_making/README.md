* There is no semicolon for the if statement

* Compiler will not throw any error if there is semicolon and its equivalent looks like this

```
if(exp)
printf("Hel");
```

Use curly braces in if condition if there are more than 1 statement.

```
uint8_t data = 60;
    if( data > 30){
        printf("Data = %d\n", data);
        data = 0;
    }
```

This would look like this:
if(1) which is non-zero value, hence this will be true. So the statements inside if block will be executed

* If we give semicolon to if statement then the below code will be equivalent to

```
if( data > 30);{
        printf("Data = %d\n", data);
        data = 0;
    }
```
Equivalent to:
```
if( data > 30){
   ;
    }
{
printf("Data = %d\n", data);
        data = 0;
    }
```

* In C, a semicolon or an empty block { } is no operation

* scanf returns total number of inputs scanned successfully; scanf("%f", &n1);
Here scanf returns 1 if the scan is successful, othewise 0.So when we enter character for the above code then scanf fails, because it was expecting a number(a real number)

* if user enters character, then with the help of return 0 in the if block, the program will be returned and exited there itself and will not go further

* Add getchar() in a separate function and call it inside if block of scanf. Othewise code will ve exited immediately and printf message will not be seen

* Add return 0 to decision_making/if_else_if.c code for invalid case, such as inputting -ve number

* For if-elif-else ladder, last else block is not mandatory

* Conditional expression: exp1 ? exp2 : exp3
 If exp1 is true then exp2 will be executed and if exp1 is false then exp3 will be executed

#### Pointer data types available in C:
```
char*                    unsigned char*
int*                       unsigned int*
long long int*     unsigned long long int*
float*                   unsigned float*
double*               unsigned double*
```

Note: * is used to differenciate between pointer variable definition and non-pointer variable definition

* long int* add = 0x1111FFFFABCFF;

this will not work because the numeric literal 0x1111FFFFABCFF is a large integer, but when you directly assign it to a pointer type like long int*, the compiler may not implicitly interpret it as a valid address, or it may generate warnings or errors because of the mismatch between the type of the literal (which is an integer) and the pointer type.

Therefore do typecasting: long int* add =(long int*) 0x1111FFFFABCFF;

```
char* add =(char*) 0x1111FFFFABCFF;
char data = *add;
```
Here * is also called as "value at address" operator which reads 1 byte of data from the pointer(1byte because it is char data type) and stored in to "data" variable

* When a pointer variable is created 8 bytes of memory is reserved for this variable because in 64 bit machine a pointer size is of 8 bytes irrespective of the pointer variable type

* Summary of read and write operation:
```
char data= *add// read from the pointer, trying to get the data stored in the pointer address
*add=0x89// write to the pointer, trying to modify the data stored in the pointer address
```

* FFFF1111ABCD1111 = 64 bits (8 bytes)
A single hexadecimal digit represents 4 bits, and two hexadecimal digits make up one byte.
Therefore, 16 hexadecimal digits (such as FFFF1111ABCD1111) represent 64 bits, which is equal to 8 bytes.
The value 0xFFFF1111ABCD1111 is stored as a 64-bit integer. If you were to store this in memory, it would occupy 8 bytes

* ffffffab, here actually the data is ab and ffffff indicate the negative number