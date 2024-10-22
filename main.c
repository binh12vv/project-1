#include "my_stm32f4_gpio_lib.h"


GPIO_InitTypeDef   myGPIO_InitStruct;
int main(void) {
     myGPIO_InitStruct.Mode =GPIO_MODE_OUTPUT_PP;
     myGPIO_InitStruct.Pin  =GPIO_PIN_5;
	   myGPIO_InitStruct.Pull =GPIO_NOPULL;
	
	__LIB_RCC_GPIOA_CLK_ENABLE();
	LIB_GPIO_Init(GPIOA, &myGPIO_InitStruct);
    while (1) {
        for (int i = 0; i < 900000; i++) {}  // Vòng lap tre
      LIB_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
		}
}
