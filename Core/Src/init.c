#include "../Inc/init.h"

void GPIO_Ini(void)
{
    SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN | RCC_AHB1ENR_GPIOCEN | RCC_AHB1ENR_GPIODEN); // Включение тактирования портов GPIOB и GPIOC
    // не работают 3-4-5
    //  SET_BIT(GPIOB->MODER, GPIO_MODER_MODER4_0);                       // Настройка работы 3-го пина GPIOB в режиме вывода сигнала (Output mode)
    //  SET_BIT(GPIOB->MODER, GPIO_MODER_MODER3_0);                       // Настройка работы 4-го пина GPIOB в режиме вывода сигнала (Output mode)
    //  SET_BIT(GPIOB->MODER, GPIO_MODER_MODER5_0);                       // Настройка работы 5-го пина GPIOB в режиме вывода сигнала (Output mode)

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE12_0);        // Настройка работы 14-го пина GPIOB в режиме вывода сигнала (Output mode)
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_12);        // Настройка на Push-Pull работу 14-го пина GPIOB (Output Push-Pull)
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR12_0); // Настройка скорости работы 14-го пина GPIOB на среднюю
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD12_0);       // Отключение PU/PD резисторов для 14-го пина GPIOB

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE13_0);        // Настройка работы 14-го пина GPIOB в режиме вывода сигнала (Output mode)
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_13);        // Настройка на Push-Pull работу 14-го пина GPIOB (Output Push-Pull)
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR13_0); // Настройка скорости работы 14-го пина GPIOB на среднюю
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD13_0);

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE15_0);        // Настройка работы 14-го пина GPIOB в режиме вывода сигнала (Output mode)
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_15);        // Настройка на Push-Pull работу 14-го пина GPIOB (Output Push-Pull)
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR15_0); // Настройка скорости работы 14-го пина GPIOB на среднюю
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD15_0);

    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE8_0);        // Настройка работы 14-го пина GPIOB в режиме вывода сигнала (Output mode)
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_8);        // Настройка на Push-Pull работу 14-го пина GPIOB (Output Push-Pull)
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR8_0); // Настройка скорости работы 14-го пина GPIOB на среднюю
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPD8_0);
    (*(uint32_t *)(0x40020400UL + 0x00UL)) |= 0x004000UL; // Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    (*(uint32_t *)(0x40020400UL + 0x04UL)) |= 0x000000UL; // Настройка на Push-Pull работу 7-го пина GPIOB (Output Push-Pull)
    (*(uint32_t *)(0x40020400UL + 0x08UL)) |= 0x004000UL; // Настройка скорости работы 7-го пина GPIOB на среднюю
    (*(uint32_t *)(0x40020400UL + 0x0CUL)) |= 0x000000UL; // Отключение PU/PD резисторов для 7-го пина GPIOB
}