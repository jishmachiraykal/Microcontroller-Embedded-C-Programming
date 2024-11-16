* STM discovery board to STM32 microcontroller  which is inside this and then to ARM cortex M4 processor to SWO pin which is connected to debug circuit which is then connected to PC via USB

* ITM is a interphase/peripheral

* SWD is nothing but debug unit

#### Executables
Different executable are .elf , .bin and .hex.

bin and hex are binaries and cannot be read by anyone so this needs to be given to customer so that code cannot be read by anyone. If we give elf, then they can easily decode the code using some tools

* Cross compilation is compiling a program with the intention of producing code for some other architecture