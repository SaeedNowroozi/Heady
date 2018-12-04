uint8_t SendByte(uint8_t byte)
{
	 uint32_t LIS302DLTimeout = TIMEOUT;
	 while (SPI_I2S_GetFlagStatus(SPI2, SPI_FLAG_TXE) == RESET) {
        if((LIS302DLTimeout --) == 0) return 0x00;
    }

    /* Send a Byte through the SPI peripheral */
    SPI_I2S_SendData(SPI2, byte);
     return 0x88;
    //return GetByte();
}
uint8_t GetByte(void)
	{
     uint32_t LIS302DLTimeout = TIMEOUT;
    /* Wait to receive a Byte */
     LIS302DLTimeout = TIMEOUT;
    while (SPI_I2S_GetFlagStatus(SPI2,  SPI_FLAG_RXNE) == RESET) {
        if((LIS302DLTimeout --) == 0) return 0x00;
    }

    /* Return the Byte read from the SPI bus */
    byteRecive = (uint8_t)SPI_I2S_ReceiveData(SPI2);
		return SendByte(byte1);
}
void Write(uint8_t Reg, uint8_t *DATA, uint8_t count)
{
	  int i;
     /* Write FPGA */
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		delay(100);
		/* Start SPI Protecol */
		GPIO_ToggleBits(GPIOB,GPIO_Pin_12);
    //GPIO_WriteBit(GPIOE, GPIO_Pin_3, RESET);
//    SendByte(Reg);
//    for (i=0; i < count; i++) {
//        SendByte(*DATA);
//        DATA++;
//    }
	  GetByte();
		GPIO_ToggleBits(GPIOB, GPIO_Pin_12);
    //GPIO_WriteBit(GPIOE, GPIO_Pin_3, SET);
}
void Read(uint8_t Reg, uint8_t *DATA, uint8_t count)
{
		uint8_t i;
    //GPIO_WriteBit(GPIOE, GPIO_PIN_3, SET);
    /* Read FPGA */
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		delay(100000);
		/* Start SPI Protecol */
		GPIO_ToggleBits(GPIOB,GPIO_Pin_12);
	//GPIO_ReadInputData(GPIOB);
	  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_6);
	  //GPIO_WriteBit(GPIOE, GPIO_Pin_3, RESET);
//    Reg |= 0x80;
//    if (count > 1) {
//        Reg |= 0x40;
//    }
//    SendByte(Reg);
//    for (i=0; i < count; i++) {
//        *DATA = SendByte((uint8_t)0x00);
//         DATA++;
//    }
	  GetByte();
	  GPIO_ToggleBits(GPIOB, GPIO_Pin_12);
}