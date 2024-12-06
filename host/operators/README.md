* Parentheses(), to be used to force an expression to a higher precedence. So use ()  if you want to promote promote precedence of an operator of our choice

* All arithmetic operators are binary operators i.e., at least they need 2 operands to operate
addition, subtraction, multiplication, division and modulus

* Precedence table, lower the number higher the precedence

* x=x+1 equivalent of this to unary operator is x++. x++ and ++x both are same

* Relational operators are evaluated from left to right and it is a binary operator

* = assignment operator and == equal to operator. Relational operators are evaluational operators.
In C, 0 is false and anything non-zero is true

* 3 logical operators: AND, OR and NOT(unary)

* 1 && 10 = true because both 1 and 10 are non-zero values/
0 && 1 = false because 0 is false and FT is false

* Operators:

    1. Unary operators: requires only one operand. Ex: ++, --
    2. Binary operators: requires at least 2 operands. Ex: arithmetic, relational, logical, bitwise and assignment operators.
    3. Ternary operators: Requires three operands

* In pre-incrementing(++X), first the value of X will be incremented by 1 and then the value of X will be assigned to any variable.
Ex: unint32_t x,y;

```
x=5;
y=++x;
y=6, x=6
```

* In post-incrementing(X++), first the value of X will be assigned to variable and then the value of X will be incremented by 1.
Ex: unint32_t x,y;

```
x=5;
y=x++;
y=5, x=6
```

* And the same condition applies to pre-decrementing(--X) and post-decrementing(X--)

#### Unary operator with pointer variables:

    unit32_t *pAddress = (uint32_t) 0xFFFF0000;
    pAddress = pAddress  + 1; // this is arithmetic operation
    pAddress++; // this is unary increment operation

* Relational operators do some kind of evaluation on the operands and then return value 1(for true) and 0 (for false)

```
A=9, B=10
C = (A==B);
```

If A and B are the same value, then this expression evaluates to true(1), otherwise false(0).
C = 0, because A is not equal to B

* When we use logical operators we have to talk in terms of logical states like true or false of the variables or of the exp. And should not consider real value of the variables or the expression