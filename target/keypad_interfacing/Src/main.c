#include<stdio.h>

#include<stdint.h>



void delay (void) {

    for(uint32_t i=0; i < 300000; i++);

}

int main(void)

{

/*Keep all row GPIOs in OUTPUT mode

Keep all column GPIOs in INPUT mode*/

//peripheral register addresses

uint32_t volatile *const pGPIOModeReg  =(uint32_t*)(0x40020C00);

uint32_t volatile *const pInputDataReg =(uint32_t*)(0x40020C00+ 0x10);

uint32_t volatile *const pOutputDataReg =(uint32_t*)(0x40020C00+ 0x14);

uint32_t volatile *const pClkCtrlReg  =(uint32_t*)(0x40023800+ 0x30);

uint32_t volatile *const pPullUpDownReg  =(uint32_t*)(0x40020C00+ 0x0C);



// Enable the peripheral clock of GPIOD peripheral

*pClkCtrlReg |= (1 << 3);



// configure PD0, PD1, PD2 and PD3 as output(rows)

*pGPIOModeReg &= ~(0xFF); // clear the fields

*pGPIOModeReg |= (0x55); // set the fields
// configure PD8, PD9, PD10 and PD11 as inputs (columns)

*pGPIOModeReg &= ~(0xFF << 16);//bit position of 8th bit is 16 as per user manual



// Enable internal pull up resistors for PD8, PD9, PD10 and PD11

*pPullUpDownReg &= ~(0xFF << 16);

*pPullUpDownReg |= (0x55 << 16); // set the pull up reg fields



while(1) {// infinite loop

/*Make all row GPIOs HIGH state*/

*pOutputDataReg |= 0xf;



/* Make r1 low(PD0) */

*pOutputDataReg &= ~(1<<0);



/*Check C1(PD8) is high or low*/

if(!(*pInputDataReg & (1 << 8))) {

// key is pressed

delay();

printf("1\n");

}



/*Check C2(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 9))) {

// key is pressed

delay();

printf("2\n");

}



/*Check C3(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 10))) {

// key is pressed

delay();

printf("3\n");

}
/*Check C4(PD10) is high or low*/

if(!(*pInputDataReg & (1 << 11))) {

// key is pressed

delay();

printf("A\n");

}



    /*Make all row GPIOs HIGH state*/

*pOutputDataReg |= 0xf;


    /* Make r2 low(PD1) */

    *pOutputDataReg &= ~(1<<1);



    /*Check C1(PD8) is high or low*/

if(!(*pInputDataReg & (1 << 8))) {

// key is pressed

delay();

printf("4\n");

}



/*Check C2(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 9))) {

// key is pressed

delay();

printf("5\n");

}

/*Check C3(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 10))) {

// key is pressed

delay();

printf("6\n");

}



/*Check C4(PD10) is high or low*/

if(!(*pInputDataReg & (1 << 11))) {

// key is pressed

delay();

printf("B\n");

}


/*Make all row GPIOs HIGH state*/

*pOutputDataReg |= 0xf;


    /* Make r3 low(PD2) */

    *pOutputDataReg &= ~(1<<2);



    /*Check C1(PD8) is high or low*/

if(!(*pInputDataReg & (1 << 8))) {

// key is pressed

delay();

printf("7\n");

}



/*Check C2(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 9))) {

// key is pressed

delay();

printf("8\n");

}

/*Check C3(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 10))) {

// key is pressed

delay();

printf("9\n");

}



/*Check C4(PD10) is high or low*/

if(!(*pInputDataReg & (1 << 11))) {

// key is pressed

delay();

printf("C\n");

}


/*Make all row GPIOs HIGH state*/

*pOutputDataReg |= 0xf;


    /* Make r4 low(PD3) */

    *pOutputDataReg &= ~(1<<3);



    /*Check C1(PD8) is high or low*/

if(!(*pInputDataReg & (1 << 8))) {

// key is pressed

delay();

printf("*\n");

}



/*Check C2(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 9))) {

// key is pressed

delay();

printf("0\n");

}

/*Check C3(PD9) is high or low*/

if(!(*pInputDataReg & (1 << 10))) {

// key is pressed

delay();

printf("#\n");

}



/*Check C4(PD10) is high or low*/

if(!(*pInputDataReg & (1 << 11))) {

// key is pressed

delay();

printf("D\n");

}


} // while end

// add ITM code for this program

return 0;

}
