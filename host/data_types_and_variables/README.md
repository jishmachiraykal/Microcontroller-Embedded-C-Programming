* In order to print the value of the variable stored inside, we need to use format specifier like %d, %f,%c, %s,%u( unsigned int format), %ld(long int), %x(hex) ,%o(octal) etc.....

* Out of 8 bytes (1 bit), of the 7th bit is 0, then the data is +ve, if it is 1 then it is -ve
and remaining bits are used to store magnitude

```
-25= 124 64 32 16 8 4 2 1 -->0 0 0 1 1 0 0 1 respectively === 8 bits now

Then do 1's compliment which is 1 1 1 00 1 1 0 next is to take 2's compliment
1 1 1 00 1 1 0
                    1

------------------
1 1 1 0 0 1 1 1 = -25 , this is how it is stored in the memory
```

#### Note: if the value is negative then only keep the magnitude otherwise for example
data = + 25 then the answer is direct 0 0 0 1 1 0 0 1   

* First define the variable and then intialize it. Vice versa is wrong

* Extern keyword is used to tell compiler that the variable is defined outside of this file

* If there is both local and global variable, then preference is given to local over global variable and also we cannot use same variable name to different data types to declare and initialize

* Here, unsigned char data= 250; means data will be assigned with the value 250 and it is within the range i.e., 0-255.

* unsigned char data= 'a'; here is externally looks a but internally stores its corresponding ASCII value i.e., 97 which is with 0-255. Hence it even if you store character literal it will be converted and stored its ASCII value

* short(2 bytes), char(1 byte) and long long( 8 bytes) these data types size is fixed always irrespective of the compilers used

* sizeof(operator name) ---> operator name can be any variable name or data type name

* Variable names are not stored inside the computer memory and it will be replaced by the memory location addresses during data manipulation. It is used as a label

* Variable naming rules: variable names should not more than 30 because some compilers throws error. It shoudn't start with a digit and should not be from reserved keywords list

* Single precision -32 bits representation:
23 bits for significand
8 bits for exponent

1 bit for sign

* Double precision -64 bits representation:
52 bits for significand
11 bits for exponent

1 bit for sign

* %lf format specifier for double type variables
* %f format specifier for float type variables
* %e and %le to read and write numbers in scientific notation

* All constant with a decimal point are considered as double by default

* Range of float
Storage size: 4 bytes
Precision up to 6 decimal places
Value range: 1.2x10^38 to 3.4x10^38

* Range of double
Storage size: 8 bytes
Precision up to 15 decimal places
Value range: 2.3x10^308 to 1.x10^308

```
float n1 = 23.1000010001010;
printf("Float =%0.9f\n", n1); // here %0.9f is width specifier telling to print upto 9 decimal places after point, but precision will be less here.  Use double if you want more precision
```

* short int is nothing but short which is of 2 bytes(16 bits) 