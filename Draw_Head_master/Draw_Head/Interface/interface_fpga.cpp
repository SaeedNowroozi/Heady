/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "interface_fpga.h"
#include "Control/control_head.h"

QString Interface_FPGA::error(BYTE code)
{
    QString str;
    switch (code) {
    case 0xA0: str = "can not connect to Fpga";
        break;
    case 0xA1: str = "can not connect to Motor1";
        break;
    case 0xA2: str = "can not connect to Motor2";
        break;
    case 0xA3: str = "can not connect to Motor3";
        break;
    case 0xA4: str = "can not connect to Head";
        break;
    case 0xA5: str = "can not connect to Microcontroller";
        break;
    default: str = "unknown error code";
        break;
    }
    return  str;
}

Interface_FPGA::Interface_FPGA(QObject *parent):QObject (parent)
{
    __control_motor =new  Control_Motor(100);
    __control_head = new Control_Head();
}

bool Interface_FPGA::__check(Interface_FPGA::SPI)
{
    status = 0;
    if(__Send(Init_Motors_Addr) == true)
        status +=1;
    if(__Send(Init_Head_Addr) == true)
        status +=1;
    if(__Send(Init_Micro_Addr) == true)
        status += 1;
    if(status == 3)return  true;

    return  false;
}

bool Interface_FPGA::__Send(BYTE send)
{
    Q_UNUSED(send)
    return true;
}

BYTE Interface_FPGA::_Get(const BYTE & resive)
{
    Q_UNUSED(resive)
    return true;
}

bool Interface_FPGA::__Get(BYTE resive)
{
    Q_UNUSED(resive)
    return true;
}
//Config motor in first connection with fpga
bool Interface_FPGA::Config_motor()
{
    __control_motor->init();
    return true;
}
//Config head in first connection with fpga
bool Interface_FPGA::Config_head()
{
    __control_head->init_head();
    __control_head->trigger(100);
    __control_head->__Sequencing__Voltage();
    return true;
}

bool Interface_FPGA::__Start() const
{
    return true;
}

BYTE Interface_FPGA::Convert_Byte(int)
{
    return  1;
}


