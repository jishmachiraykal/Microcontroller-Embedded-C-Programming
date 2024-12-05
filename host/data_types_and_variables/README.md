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