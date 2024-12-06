#include<stdint.h>
#include "main.h"

int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCtrlReg= ADDR_AHB1ENR_REG;
	GPIOx_MODE_t volatile *const pPortDModeReg= ADDR_GPIOD_MODE_REG;
	GPIOx_ODR_t volatile *const pPortDOutReg= ADDR_GPIOD_OUTPUT_REG;

	//1. enable the clock for GPOID peripheral in the AHB1ENR (SET the 3rd bit position)
	pClkCtrlReg->gpiod_en = CLK_ENABLE;

	//2. configure the mode of the IO pin as output
	pPortDModeReg->pin_12= MODE_CONF_OUTPUT;

while(1){
	//3.SET 12th bit of the output data register to make I/O pin-12 as HIGH
	pPortDOutReg->pin_12= PIN_STATE_HIGH;

    //introduce small human observable delay
	//this loop executed for 15k times
	for(uint32_t i=0; i<DELAY_COUNT ; i++);

	//turn off the led i.e., reset the 12th bit
	pPortDOutReg->pin_12= PIN_STATE_LOW;

    //introduce small human observable delay
	//this loop executed for 15k times
	for(uint32_t i=0; i<DELAY_COUNT ; i++);
}
}
