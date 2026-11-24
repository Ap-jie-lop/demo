//PB5 -0亮
#include "stm32f10x.h"                  // Device header
int main(void)
{
	RCC->APB2ENR = 0x00000008;//打开APB2时钟
	GPIOB->CRL = 0x00300000;//输出，推挽
	GPIOB->ODR = 0x00000000;
}
