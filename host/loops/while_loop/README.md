#### syntax:

        while(expression){

        statement 1...n;

        }

* Semicolon should not be given in while loop, compiler may not warn about this but this is equivalent to executing ; after the expression in while loop and the actual statement which is there inside while loop will be executed outside the loop. Hence it creates a infinite loop        

* forever loop is used in embedded application which runs program forever or as long as it is powered up.

```
int main void(){

//super loop  the condition is always true
while(1){

readdatasensor();
processdata();
display sensor data();

} //while loop end

}
```

* while(1) will create an infinite loop or a for loop can also be used