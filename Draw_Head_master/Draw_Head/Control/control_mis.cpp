/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "control_mis.h"

#include <utility>

Control_Mis::Control_Mis()
{
    __Interface_FPGA = new Interface_FPGA(this);
    __Interface_USB = new Interface_USB();
}

Control_Mis::~Control_Mis()
{
    delete __Interface_FPGA;
    delete __Interface_USB;
}

bool Control_Mis::Stop()
{
    int p = 0;
    if(p >= 100)
    {
        //send stop head;
        __Interface_FPGA->__Send(P_stop);
        return  true;
    }
    return  false;
}

bool Control_Mis::Start()
{
    int p = 0;
    if(p <= 100)
    {
        //send start head
        __Interface_FPGA->__Send(P_start);
        return true;
    }
    return  false;
}

bool Control_Mis::_Get_Data_MPX4115AP(BYTE a)
{
    __Interface_FPGA->__Send(_standar);
    if(__Interface_FPGA->__Get(a)) return true;
    //usb send
    return  false;
}
BYTE Control_Mis::_Gaging()
{
    auto gaging = __Interface_FPGA->_Get(16);
    if(gaging >= 10)  gaging = 8;

    return gaging;
}

BYTE Control_Mis::_Send_to_fpga() const
{
    BYTE a = '\0' ;//= _Gaging();
    return a;
}

bool Control_Mis::_Start_Vacuum_Pomp()
{
    //send 1 start vacuum
    //usb send
    if(__Interface_FPGA->__Send(P_Start_Vacuom))
        return  true;

    return  false;
}

bool Control_Mis::_Stop_Vacuum_Pomp()
{
    //send 0 stop vacuum
    //usb send
   if(__Interface_FPGA->__Send(P_Stop_Vacuom))
    return  true;

   return false;
}
