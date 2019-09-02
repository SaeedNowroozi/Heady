/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "control_mis.h"

Control_Mis::Control_Mis()
{
__Interface_FPGA = new Interface_FPGA();
__Interface_USB = new Interface_USB();
}

Control_Mis::~Control_Mis()
{
    delete __Interface_FPGA;
    delete __Interface_USB;
}

void Control_Mis::Stop()
{
    int p = 0;
    //while(){b
    //read Pe sensor
    //
    if(p >= 100)
    {
        //send stop head;

    }
    //    else
    //    {

    //    }
}

void Control_Mis::Start()
{
    int p = 0;
    //while(){
    //read pe sensor
    if(p <= 100)
    {
        //send start head
    }
}

bool Control_Mis::_Get_Data_MPX4115AP(BYTE a)
{
   __Interface_FPGA->__Get(a);
    //usb send
   return  true;
}
BYTE Control_Mis::_Gaging()
{
    auto gaging = __Interface_FPGA->_Get(16);
    if(gaging >= 10)
        gaging = 8;
    return gaging;
}

BYTE Control_Mis::_Send_to_fpga() const
{
   BYTE a = '\0' ;//= _Gaging();
   return a;
}

bool Control_Mis::_Start_Vacuum_Pomp(BYTE aa)
{
 return __Interface_FPGA->__Send(aa);
    //send 1 start vacuum
    //usb send
}

bool Control_Mis::_Stop_Vacuum_Pomp(BYTE a)
{
    __Interface_FPGA->__Send(a);
    //send 0 stop vacuum
    //usb send
    return  true;
}
