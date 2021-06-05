/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CONTROL_MIS_H
#define CONTROL_MIS_H

/////////////////        MICROCONTROLLER pressure
#define _standar    0x01
#define P_Start_Vacuom 0x03
#define P_low       0x02
#define P_high      0x05
#define P_inc       0x09
#define P_dic       0x08
#define P_stop      0x07
#define P_Stop_Vacuom 0x08
#define P_start   0x09

#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"

#include <QObject>

#include <cassert>
#include <utility>

typedef unsigned char BYTE;

class Control_Mis : public QObject
{
    Q_OBJECT
public:
    Control_Mis();
    ~Control_Mis();
    bool Stop();
    bool Start();
    BYTE _Gaging();
    BYTE _Send_to_fpga()const;

private:
    bool _Send_Data_MPX4115AP(BYTE);
    bool _Get_Data_MPX4115AP(BYTE a);
    bool _Start_Vacuum_Pomp();
    bool _Stop_Vacuum_Pomp();
    Interface_FPGA *__Interface_FPGA;
    Interface_USB  *__Interface_USB;
};

#endif // CONTROL_MIS_H
