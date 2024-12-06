* When a key is pressed there will be contact between the row and column

* C1,C2,C3 and C4 are input to microcontroller to tell which key is pressed and R1,R2,R3 and R4 outputs to the microcontroller

* C1 is open circuit/ floating, in that case voltage will be fluctuating i.e., high or low

* In order to avoid the floating state we are using pull up resistor between Vcc and pin. So if key is not pressed, c1 value will be +Vdd. Hence pin connected to C1 will be high in this case
    Key pressed= low

* Make r1 low and r2,r3, and r4 high, if key 2 is pressed which means c2 will be pulled down to low and reads low. That is the logic here to check which key is pressed

* Reason behind giving delay.
Button debouncing: The time between release of the key once user presses it. There will be metal contact and the values toggle between high and low

* Since we are only using pull up register 01 configuration is used

* How to calculate the delay:

    Compiler is executing 7 instructions for one iteration of the for loop

    1. Processor running with 16MHz of internal RC oscillator
    2. let's assume 1 instruction takes 1 clock cycle
    3. 1 ins = 0.0625 microseconds
    4. 7 ins = 0.5 microseconds
    5. 0.5 microseconds = 1 iteration of the for loop
    6. 1 microseconds(1ms) = 2000 iterations of the for loop
    7. Hence 150 ms = 150 x 2000 = 300000 iteration. Hence 300000 is given in the for loop
