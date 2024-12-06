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

* 