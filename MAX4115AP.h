#ifndef __MAX4115AP_H
#define __MAX4115AP_H

double presure;
float presure_value_analog;
float milibar, presure_cal;
double _presure_value(); 
uint16_t readADC(uint8_t channel);
void _init_ADC();

#endif