* Optimization is nothing but making the code size less, no.of instruction less and power consuming power by changing the optimization levels

* Different optimization level and its result on sizeOf code:
O0(default):text    data     bss     dec     hex filename

   5156      92    1900    7148    1bec sizeOf.elf

O01: text    data     bss     dec     hex filename

   4940      92    1900    6932    1b14 sizeOf.elf

O02:text    data     bss     dec     hex filename

   4932      92    1900    6924    1b0c sizeOf.elf

Here, text size is reduced and saving some bytes of memory with the higher optimization.

* Note: Changing the optimization level is fine but make sure programming is working fine with the optimization level we choose

