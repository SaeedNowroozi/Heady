/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef INTERFACE_FPGA_H
#define INTERFACE_FPGA_H

#define Init_Motors_Addr            0x0000 // initialze motor
#define Init_Head_Addr              0x0001 // initialze Head
#define Init_Micro_Addr             0x0002 // initialze Micro

#define Read_Phy_Addr               0x0003 // Read Sensor phy
#define Read_Head_Addr              0x0004 // Read status Head
#define Read_Microcontroller_Addr   0x0005 // read Microcontroller

#define Write_Head_Addr             0x0006 // write 8 bit into Head
#define Write_Microcontroller_Addr  0x0007 // write 8 bit into Microcontroller
#define Write_Motor1_Addr           0x0008 // write 8 bit into Motor1
#define Write_Motor2_Addr           0x0009 // write 8 bit into Motor2
#define Write_Motor3_Addr           0x000a // write 8 bit into Motor3

/*                    ERROR CODE                    */


#define ERROR_0 0xA0 //can not connect to Fpga
#define ERROR_1 0xA1//can not connect to Motor1
#define ERROR_2 0xA2 //can not connect to Motor2
#define ERROR_3 0xA3//can not connect to Motor3
#define ERROR_4 0xA4 //can not connect to Head
#define ERROR_5 0xA5 //can not connect to Microcontroller



#include "Control/control_motor.h"
#include <utility>
#include <QObject>

#include <assert.h>

class Control_Head;

typedef unsigned char BYTE ;
class Interface_FPGA : public QObject
{
   Q_OBJECT

public:
    QString error(BYTE code);
    struct SPI{
        unsigned char SPI1 = 1;/* Motor 1 */
        unsigned char SPI2 = 2;/* Motor 2 */
        unsigned char SPI3 = 3;/* Motor 3 */
        unsigned char SP14 = 4;/* microcontroller */
        unsigned char SPI5 = 5;/* Head */
    };
    Interface_FPGA(QObject *parent = nullptr);
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
    int status;
};

#endif // INTERFACE_FPGA_H
