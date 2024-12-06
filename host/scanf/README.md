* Syntax: scanf("%d", &age);

* Scanf reads the integer which user enters(%d) and puts that read value "at the address of" 'age' variable(&age) and not the ascii value. In order to store the ascii value of age entered give %c

* If you give more input than asked then scanf will only take the no. of inputs which asked not more than that

* getchar() is used if we want to read a single character from ketboard in ASCII format and it takes no argument and just returns the int value which happens to be ASCII value if the keypressed.

* int a= getchar(); here the program hangs until we press a key followed by pressing the enter key

```
    char name;
    printf("Enter your name");
    scanf("%s",&name);
    printf("Hello %s\n", name);
```

Throws error due to the following reasons:

1.In the code, this is declared name as a single char (char name;), but trying to use it as a string (with %s in printf and scanf). A single char can hold only one character, while you need an array of char (a string) to hold multiple characters (like a name).

2.Incorrect Usage of scanf:

In your scanf, you are using &name, but since name is an array (after you correct the declaration), you should not use the address-of operator (&). Arrays in C are automatically passed as pointers, so &name is incorrect.

