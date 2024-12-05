/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Jishma C P
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
 uint32_t *pClkCtrlreg = (uint32_t*)0x40023830;
    uint32_t *pPortDreg = (uint32_t*)0x40020C00;
    uint32_t *pPortDOutputreg = (uint32_t*)0x40023830;
    //1.Enable the clock for GPIOD peripheral in the AHB1ENR
    /*uint32_t tmp = *pClkCtrlreg; // Read operation
    tmp = tmp| 0x08; // 0x08 to modify the 3rd bit
    *pClkCtrlreg = tmp; // write back
    below one line is equivalent to above three lines*/

    *pClkCtrlreg |= 0x08;

    //2.Configure the mode of the IO pin as output
    //2.a clear 24th and 25th bit positions(Clear)
    *pClkCtrlreg &= 0xFCFFFFFF;

    //2.b set 24th position as 1(Set)
    *pClkCtrlreg |= 0x01000000;

    //3.Set 12th pin of the output data register to make I/O pin-12 as HIGH
    *pClkCtrlreg |= 0x1000;

    /* Hang the application*/
	while(1);
}
