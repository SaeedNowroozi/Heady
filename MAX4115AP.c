void _init_ADC()
{
	// ADC Config
	ADC_InitTypeDef ADC_init_Structure;
	GPIO_InitTypeDef GPIO_init_Structure;
	//Clock configure
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_AHB1ENR_GPIOCEN,ENABLE);
	//Analog pin Configure
	GPIO_StructInit(&GPIO_init_Structure);
	GPIO_init_Structure.GPIO_Pin = GPIO_Pin_0;
	GPIO_init_Structure.GPIO_Mode = GPIO_Mode_AN;
	GPIO_init_Structure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOC, &GPIO_init_Structure);
	//ADC Structure configure
	ADC_DeInit();
	ADC_init_Structure.ADC_DataAlign = ADC_DataAlign_Right;
	ADC_init_Structure.ADC_Resolution = ADC_Resolution_10b;
	ADC_init_Structure.ADC_ContinuousConvMode = ENABLE;
	ADC_init_Structure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_T1_CC1;
	ADC_init_Structure.ADC_NbrOfConversion = 1;
	ADC_init_Structure.ADC_ScanConvMode = DISABLE;
	ADC_Init(ADC1, &ADC_init_Structure);
	//Enable ADC convertion
	ADC_Cmd(ADC1, ENABLE);
	//Select the channel to read from
	ADC_RegularChannelConfig(ADC1, ADC_Channel_10, 1, ADC_SampleTime_144Cycles);
	presure_cal = _presure_value();
	milibar = presure_cal / 100;

// while(1);
}
double _presure_value()
{
	presure_value_analog = readADC(12);
	presure = ((presure_value_analog / 1024.0) + 0.095 ) / 0.000009;//1024
	return presure;
}
uint16_t readADC(uint8_t channel)
{
	ADC_SoftwareStartConv(ADC1);
	while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC));
	return ADC_GetConversionValue(ADC1);
}