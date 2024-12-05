// extern is used to declare the varibable in the file.c from main.c
extern int my_private_data;

void myfunc1(void)
{
    my_private_data = 40;
}