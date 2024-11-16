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