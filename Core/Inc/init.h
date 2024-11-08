#include "../../CMSIS/Devices/stm32f429xx.h"
#include "../../CMSIS/Devices/stm32f4xx.h"

#define GPIOB_MODER (*(uint32_t*)(0x40020400UL + 0x00UL))
#define GPIOB_OTYPER (*(uint32_t*)(0x40020400UL + 0x04UL))
#define GPIOB_OSPEEDR (*(uint32_t*)(0x40020400UL + 0x08UL))
#define GPIOB_PUPDR (*(uint32_t*)(0x40020400UL + 0x0CUL))
#define GPIOB_BSRR (*(uint32_t*)(0x40020400UL + 0x18UL))

#define GPIOB_MODE_PIN6_OUT 0x001000UL
#define GPIOB_OTYPE_PIN6_PP 0x000000UL
#define GPIOB_OSPEED_PIN6_MID 0x00400UL
#define GPIOB_PUPDR_PIN6_NOPUPD 0x000000UL

#define GPIOB_BSRR_PIN6_SET 0x000040UL
#define GPIOB_BSRR_PIN6_RESET 0x800000UL

void GPIO_Ini(void);
void RCC_Init(void);
void ITR_init(void);