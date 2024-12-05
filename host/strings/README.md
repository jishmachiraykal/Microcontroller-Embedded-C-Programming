* In c we don't have dedicated data type to store string, so we make use of array to manipulate data. String is realized through arrays

* Storing string using array: 
```
char message[] = "Hello";
in memory:
0xE01  0xE02  0xE03 0xE04 0xE05 0xE06

'H'           'e'            'l'           'l'             'o'            '\0' -- 0 will be stored here to indicate the end of string
```
Totally this consumes 6 bytes in a memory

* strlen(msg) stores only the required info, so total memory will be 5 bytes as per the above code snippet

* char msg[]= "A"; string definition

* char msg[]= 'A'; char definition

* char *msg = "Hello"; here memory stored in ROM

* char msg = "Hello"; here memory stored in RAM. Therefore *msg value cannot be manipulated and msg value can be changed like this msg[1] = 'k';

* RAM memory location starts from 0x200;

* In array value of array variable and address of array variable is same

* So here in the array example, data will be stored in the stack memory so this is transient and will be destroyed once main function exits. So if any changes done to msg1 stack memory changes and flash will not

```
char const *psmg2 = "Helloo";
```
This is more valid because modifying pmsg2 may result in crash, so making it constant

* scanf actually ignores the whitespace character where we give input. So using scanf we cannot read a string which has multiple spaces. So in this case we can make use of scanset to tell how much of input is needed according to the requirement. Therefore scanset can be used to store all the strings in single array

```
int a[10]; // an integer array
student_info students[10];// structure array to store record of 10 students
```

* Deleting means zeroing all the member element of a node

