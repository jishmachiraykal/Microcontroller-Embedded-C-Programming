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

* Each char typically takes 1 byte of memory. Therefore, the total memory used by char name[] = "Hello"; would be:5+1('\0')= 6 bytes

* char name[]=['h', 'e', 'e'};
This is not a string definition but an array definition. Here "hee" will not terminated by '\0' because this is not a string

* Copying of string from flash to stack of RAM will not be done by startup code, it is done during the run time of the function

* char *name2[]= "Sera";
This variable is living in RAM pointing to FLASH. Therefore we cannot change the value of name[0]='l';
Because it is pointing to flash and we can't change value stored in flash

* Be careful while using %s with an array of characters. The array must be terminated with a null character, otherwise it will result in segmentation fault

```
scanf("%s", name);
```
Here scanf will take care of inputting null character after string when %s is specified

```
char name;
printf("Enter namee");
scanf("%s",&name);
printf("%s", name);
```

This is wrong because the %s format specifier expects a pointer to a char array (i.e., a char*), not a single char variable. This causes undefined behavior.

Right way to do is char name[100];

