* printf will never cause the cursor to move to the next line

* Here n is the code to push the line to the new cursor and \ is a escape character

* It should contain at least one function which is called main function

* According to the C 99 standard, main should return int --> int main ()

```
int main () -- function prototype
{   ----\
     ----    body of the function

} -----/
```

* Add -save-temps complier flag in settings and run hello world code and you will see the additional files generated as part of this and the flow is as below:

* main.c --> main.i( combo of stdio.h file content and hello world function) --> main.s( lower level assemly language --> main.o ( machine level language)

* main function should return int as return type according to the standard

* printf is a function to print some texts and do various things

* In C, every executable statement should end with a semicolon(;)