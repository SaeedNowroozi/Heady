//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com

#include "control_head.h"
#include "Convert/smart_algorithm.h"
#include <QTime>

Control_Head::Control_Head()
{
    __Interface_FPGA = new Interface_FPGA();
    __Interface_USB = new Interface_USB();
   // __time = new QTime(10);
    __smart_algorthm = new Smart_Algorithm();
}

Control_Head::~Control_Head()
{
    delete __Interface_FPGA;
    delete __Interface_USB;
    delete __smart_algorthm;
}

void Control_Head::__PrintDataStruchuer(std::tuple<Control_Head::DataStruchuer, Control_Head::DataStruchuer> Data)
{
    auto  __data = Data;
}

void Control_Head::__Select(Control_Head::Cycle)
{
    while(!__smart_algorthm->__finsh_bit())
    {
        int Nazzel[128];
        for(int i = 1; i<= 128; i++)
        {
            if(Cycle::A)
            {
                Nazzel[i] = (1 + (i * 3));
            }
            else if(Cycle::B)
            {
                Nazzel[i] = (2 + (i * 3));
            }
            else if(Cycle::C) {
                Nazzel[i] = (3 + (i * 3));
            }
        }
    }
}

std::vector<Control_Head::Cycle> Control_Head::CycleOrder(Control_Head::Cycle, bool PHO)
{
    if(PHO == true)
    {
        order.push_back(Cycle::A);
        order.push_back(Cycle::B);
        order.push_back(Cycle::C);
        order.push_back(Cycle::A);
    }
    else
    {
        order.push_back(Cycle::C);
        order.push_back(Cycle::B);
        order.push_back(Cycle::A);
        order.push_back(Cycle::C);
    }
    return order;
}

void Control_Head::trigger(int trig)
{
//    if(trig == 1)
//    {
//        __time->start();
//        __time->msec();
//        do{
//            if(__time->msec() == 10)
//                __Sequencing__Voltage(true, false, false);
//            if(__time->msec() == 40 )
//                __Sequencing__Voltage(true, true, false);
//            if(__time->msec() == 60)
//                __Sequencing__Voltage(true, true, true);
//        }while (__time->msec() == 100);
//    }
//    else
//    {
//        //Stop fire Head
//        __Sequencing__Voltage(false, false, false);
//    }
}
/* Sequencing Voltage */
void Control_Head::__Sequencing__Voltage(bool five_volt, bool high_volt, bool low_volt)
{
    int start;
    if(start == 1)
    {
        five_volt = true;
        // send five bool
        low_volt = true;
        // send low volt
        high_volt = true;
        // send high volt
    }
    else
    {
        five_volt = false;
        // send five bool
        low_volt = false;
        // send low volt
        high_volt = false;
        // send high volt
    }
}
#define Max_Speed_Head 200
//Control Speed Head
void Control_Head::__Max_Speed()
{
    int speed = Max_Speed_Head;
}

void Control_Head::init_head()
{
    enable = 1;
    __Interface_FPGA->Config_head();
    __Sequencing__Voltage(true, false, false);
}
