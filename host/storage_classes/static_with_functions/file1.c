void total_fruits(int fruits_collected);

void myfunc1(void)
{
    total_fruits(200); 
}
//output: this will throw an error as function total_fruits is private to main.c
//Remove static in order to see the global function usage