* GPIO D is the peripheral used to control port D(PD12) i..e, LED4 Green. By controlling the GPIO D peripheral register which are memory mapped we can control LED's

* By default most of the peripherals are dead. We have to activate them i.e., enabling the clock in order to perform some functions on that peripheral

* Summary of steps to turn on LED
    1. Identify the GPIO port used to connect the LED -- GPIOD
    2. Identify the GPIO pin where LED is connected -- PD12 -- Pin no. 12
    3. Activate the GPIOD peripheral(Enable the clock)
    4. Configure the GPIO pin mode as output
    5. Write 1 to make the GPIO pin high and write 0 to make the GPIO pin low

* RCC(reset and clock control),In STM32 MCU all clock registers are mapped to 0x4002 3800 - 0x4002 3BFF and we use this in order to enable the peripheral clock control registers

* Get the below addresses from data sheet and user manual:
```
Address of the clock control register(AHB1ENR)
0x4002 3800 +0x30(address offset) == 0x4002 3830

Address of the GPIOD mode register (used to control mode)
0x4002 0C00 + 0x00(address offset) == 0x4002 0C00

Address of the GPIOD output data register (used to write)
0x4002 0C00 + 0x14(address offset) == 0x4002 0C14
```

* Using GPIO D peripheral and  its registers addresses we can control the pins, thereby LED's

* System bus(AHB) connects peripherals, memory and processor. System bus comprises of 32 bit address channel and 32 bit data channel i.e., we can put 2^32 = 4G different memory locations on to the address bus to target different peripherals, memory

* Memory map of ARM cortex Mx processor. When the processor(address generation unit) puts address on the address bus which falls under peripheral region (0x40000000 - 0x60000000), then address bus will be talking to peripherals (GPIO D peripheral). If it is SRAM region then it will be talking to data memory

* Input and output configuration are done using mode registers