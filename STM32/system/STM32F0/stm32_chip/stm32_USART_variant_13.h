
const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF1_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF0_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF1_USART2}, 
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF1_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF0_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF4_USART3}, 
    { USART3, GPIOC, GPIO_PIN_5  , GPIO_AF1_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF1_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF0_USART3}, 
//USART4
    { USART4, GPIOA, GPIO_PIN_1  , GPIO_AF4_USART4}, 
    { USART4, GPIOC, GPIO_PIN_11 , GPIO_AF0_USART4}, 
    { USART4, GPIOE, GPIO_PIN_9  , GPIO_AF1_USART4}, 
//USART5
    { USART5, GPIOB, GPIO_PIN_4  , GPIO_AF4_USART5}, 
    { USART5, GPIOD, GPIO_PIN_2  , GPIO_AF2_USART5}, 
    { USART5, GPIOE, GPIO_PIN_11 , GPIO_AF1_USART5}, 
//USART6
    { USART6, GPIOA, GPIO_PIN_5  , GPIO_AF5_USART6}, 
    { USART6, GPIOC, GPIO_PIN_1  , GPIO_AF2_USART6}, 
    { USART6, GPIOF, GPIO_PIN_10 , GPIO_AF1_USART6}, 
//USART7
    { USART7, GPIOC, GPIO_PIN_1  , GPIO_AF1_USART7}, 
    { USART7, GPIOC, GPIO_PIN_7  , GPIO_AF1_USART7}, 
    { USART7, GPIOF, GPIO_PIN_3  , GPIO_AF1_USART7}, 
//USART8
    { USART8, GPIOC, GPIO_PIN_3  , GPIO_AF2_USART8}, 
    { USART8, GPIOC, GPIO_PIN_9  , GPIO_AF1_USART8}, 
    { USART8, GPIOD, GPIO_PIN_14 , GPIO_AF0_USART8}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF1_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF0_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF1_USART2}, 
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF1_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF0_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF4_USART3}, 
    { USART3, GPIOC, GPIO_PIN_4  , GPIO_AF1_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF1_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF0_USART3}, 
//USART4
    { USART4, GPIOA, GPIO_PIN_0  , GPIO_AF4_USART4}, 
    { USART4, GPIOC, GPIO_PIN_10 , GPIO_AF0_USART4}, 
    { USART4, GPIOE, GPIO_PIN_8  , GPIO_AF1_USART4}, 
//USART5
    { USART5, GPIOB, GPIO_PIN_3  , GPIO_AF4_USART5}, 
    { USART5, GPIOC, GPIO_PIN_12 , GPIO_AF2_USART5}, 
    { USART5, GPIOE, GPIO_PIN_10 , GPIO_AF1_USART5}, 
//USART6
    { USART6, GPIOA, GPIO_PIN_4  , GPIO_AF5_USART6}, 
    { USART6, GPIOC, GPIO_PIN_0  , GPIO_AF2_USART6}, 
    { USART6, GPIOF, GPIO_PIN_9  , GPIO_AF1_USART6}, 
//USART7
    { USART7, GPIOC, GPIO_PIN_0  , GPIO_AF1_USART7}, 
    { USART7, GPIOC, GPIO_PIN_6  , GPIO_AF1_USART7}, 
    { USART7, GPIOF, GPIO_PIN_2  , GPIO_AF1_USART7}, 
//USART8
    { USART8, GPIOC, GPIO_PIN_2  , GPIO_AF2_USART8}, 
    { USART8, GPIOC, GPIO_PIN_8  , GPIO_AF1_USART8}, 
    { USART8, GPIOD, GPIO_PIN_13 , GPIO_AF0_USART8}, 
}; 
