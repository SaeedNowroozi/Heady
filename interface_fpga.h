/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef INTERFACE_FPGA_H
#define INTERFACE_FPGA_H

//Select module's and motors
#define motor1 0x00000100
#define motor2 0x00001000
#define motor3 0x00001100
#define microcontrolle 0x00000010
#define _head 0x00000011
#define seqn5 0x10000000//5volt
#define seqnl35 0x11000000//35 volt_low
#define seqnh35 0x01000000//35 volt_high

#include "Control/control_motor.h"



#include <assert.h>

class Control_Head;

typedef unsigned char BYTE ;
class Interface_FPGA
{
public:
    const char *error(unsigned code);
    struct SPI{
        unsigned char SPI1 = 1;/* Motor 1 */
        unsigned char SPI2 = 2;/* Motor 2 */
        unsigned char SPI3 = 3;/* Motor 3 */
        unsigned char SP14 = 4;/* microcontroller */
        unsigned char SPI5 = 5;/* Head */
    };
    Interface_FPGA();
    /* Check SPI Protecol*/
    bool __check(SPI);
    // Transmation
    bool __Send(BYTE);
    // Resive
    bool __Get(BYTE);
    //Config Motors
    bool Config_motor();
    //config head
    bool Config_head();
    //Start Head Fire
    bool __Start()const;
    BYTE _Get(const BYTE & );
private:
    BYTE Convert_Byte(int);
    Control_Motor * __control_motor;
    Control_Head * __control_head;
};

#endif // INTERFACE_FPGA_H
