* Right shift operator: bits of 1st operand will be right shifted by the amount decided by the 2nd operand.

```
char a=111;

char b=a>>4, b=?

a=111 --128 64 32 16 8 4 2 1

          0  1 1   0 1 1 1 1



a>> 1  --> 0 0 1 1 0 1 1 1

a>>2 --> 0 0 0 1 1 0 1 1

a>>3 --> 0 0 0 0 1 1 0 1

a>>4--> 0 0 0 0 0 1 1 0

Therefore b = 12
```

* Bits of the first operand will be right shifted by the amount decided by the second operand

* Left shift operation will be same as that of previous right shift operation except that this will be shifted to left position

* A value will be mutipled by 2 for each left shift and divided by 2 for each right shift

* Setting of bits using bitwise OR operation and bitwise left shift operator.Recommended way is to do using left shift operator because here we need not to create mask value

        data=0x08;

        data=data | (1<<4);// taking 1 and left   shifting 4 to set 4th bit

        data= 0x18

* Example for clearing the bits using left shift operator

        data= 0x18;

        data=data& ~(1<<4);

        data=0x08;

* Result= (unit8_t) (data >>9) &0x003F);

* Value will be increased during left shit and will be decreased by right shift due to weightage of the bit

* Setting of bits can be done by using mask value, but this will be a tedious process when it comes to 32 or 64 bits data. There we can make use of bitwise shift operators to set or test bits

* Ex: Set 4th bit position
Using mask value: data =0x08;
data= data | 0x10;
data= 0x18

Using bitwise shift operator data =0x08;
data= data | (1 >>  4); // shifting binary number 1, four times left
data= 0x18

* Bit extraction: extract  bits 9-14 from 16 bits data
        1. Right shift the 9th bit value to touch lsb
        2. and then mask first 6 bits to 1 and remaining bits to zero.
        3. Then do bitwise & operation
Therefore final result would be: Output= (unit8_t) (data >>9) &0x003F); // 0x003F is the mask value

