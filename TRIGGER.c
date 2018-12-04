void init_gpio_trigger()
{    
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);///////////
	GPIO_InitTypeDef gpio;
	GPIO_StructInit(&gpio);
	gpio.GPIO_Mode = GPIO_Mode_OUT;
	gpio.GPIO_Pin = led;
	GPIO_Init(GPIOA,&gpio);////////////////
	GPIO_SetBits(GPIOA,led);///////////////
  //GPIO_ToggleBits(GPIOA,led);
	//GPIO_ResetBits(GPIOA,led);
	int i;
//	
//	while(1);
}
void loop() {
    static uint32_t counter = 0;

    ++counter;
    GPIO_ToggleBits(GPIOA,led);////////////////
   // GPIO_ResetBits(GPIOD, led);
    //GPIO_SetBits(GPIOD, LED);

    delay(25);
}
void delay(uint32_t ms) {
    ms *= 336;
    while(ms--) {
        __NOP();
    }
}