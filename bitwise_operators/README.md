#### Types of Bitwise Operatos
    1. AND(&)
    2. OR(|)
    3. Left shift(<<)
    4. Right shift(>>)
    5. NOT(~)/negation
    6. XOR(^)

* Bitwise AND(&):

                 128 64 32 16 8 4 2 1

A =40      0      0   1    0  1  0 0 0

b=30        0     0   0   1    1  1  1  0

c will be 8 0    0  0    0  1  0 0 0

* Bitwise NOT(~):

A =40      0      0   1    0  1  0 0 0
c=-41       1       1    0   1   0  1  1  1

* There is no logical XOR, there is only bitwise XOR(^):

Truth Table:

A   B   Y

0   0   0

0   1   1

1   0   1

1   1   0

#### Applicability of bitwise operators
    1. Testing of bits(&)
    2. Setting of bits(|)
    3. Clearing of bits(~ and &)
    4. Toggling of bits(^)

* For even number least significant bit is 0 and for odd number is it 1.
Ex: 40 --> 0 0 1 0 1 0 0 0 --last bit(lsb) is zero here

* Bitmasking is a technique used to test or modify the bits of given data using a mask value.
Masking the other bits which is of no interest(making it 0) i.e., making all bits zero except lsb. And then do bitwise AND operation. If the output is zero then number is even else odd

* & is used to test and clear not to set bits

* XOR is used toggle the number. Ex: toggle LED