/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "control_head.h"
#include "Convert/smart_algorithm.h"

#include <utility>


Control_Head::Control_Head()
{
    __Interface_FPGA = new Interface_FPGA(this);
    __Interface_USB = new Interface_USB();
    __smart_algorthm = new Smart_Algorithm();
    __timer = new QTimer(this);
    init_head();
    //__PrintDataStruchuer(make_tuple(DataStruchuer::NSS1,DataStruchuer::NSS2));
    trigger(1);
    connect(__timer, SIGNAL(timeout()), this, SLOT(seque()));
    __timer->start(100);
}

Control_Head::~Control_Head()
{
    delete __Interface_FPGA;
    delete __Interface_USB;
    delete __smart_algorthm;
}

void Control_Head::__PrintDataStruchuer(std::tuple<Control_Head::DataStruchuer, Control_Head::DataStruchuer> Data[])
{
    Data[0] = make_tuple(NSS1, NSS2);
}

//Boost array class!!!

int * Control_Head::__Select(Cycle)
{
    boost::array<int, 127>Nazzel_array;
    Q_UNUSED(Nazzel_array)
    int Nazzel[127];
    while(!__smart_algorthm->__finsh_bit())
    {
        Head[1] = true;
        for(int i = 1; i<= 128; i++)
        {
            if(Cycle::A == i)
            {
                Nazzel[i] = (1 + (i * 3));
            }
            else if(Cycle::B == i)
            {
                Nazzel[i] = (2 + (i * 3));
            }
            else if(Cycle::C == i) {
                Nazzel[i] = (3 + (i * 3));
            }
        }
        for (int i = 0; i< 128; i++) {
            if(Head[i] == true){
                __Nazzel[i] = true;
            }
            else {
                __Nazzel[i] = false;
            }
        }
    }
    return Nazzel;
}

std::vector<Control_Head::Cycle> Control_Head::CycleOrder(Control_Head::Cycle, bool PHO)
{
    if(PHO == true)
    {
        order.push_back(Cycle::A);
        __Interface_FPGA->__Send(0x0a);
        order.push_back(Cycle::B);
        __Interface_FPGA->__Send(0x0b);
        order.push_back(Cycle::C);
        __Interface_FPGA->__Send(0x0c);
        order.push_back(Cycle::A);
        __Interface_FPGA->__Send(0x0a);
    }
    else
    {
        order.push_back(Cycle::C);
        __Interface_FPGA->__Send(0x0c);
        order.push_back(Cycle::B);
        __Interface_FPGA->__Send(0x0b);
        order.push_back(Cycle::A);
        __Interface_FPGA->__Send(0x0a);
        order.push_back(Cycle::C);
        __Interface_FPGA->__Send(0x0c);
    }
    return order;
}

void Control_Head::trigger(qint8 trig)
{
    auto Cycle_Trigger = CycleOrder(Cycle::A, true);
    trig = 1;
    BYTE triger = static_cast<BYTE>(trig);
    __Interface_FPGA->__Send(triger);
}
/* Sequencing Voltage */
void Control_Head::__Sequencing__Voltage()
{
    int start = 0;
    if(start == 1)
    {
        seque();
        Time_MicroSec();
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

//Control Head Speed
void Control_Head::__Max_Speed()
{
    int speed = Max_Speed_Head;
    Q_UNUSED(speed)
}

void Control_Head::init_head()
{
    enable = 1;
    __Interface_FPGA->Config_head();
    __Sequencing__Voltage();
    Time_MicroSec();
}

void Control_Head::seque()
{
    i += 1;
    if(i == 10)
    {
        five_volt = true;
        // send five bool
        low_volt = false;
        // send low volt
        high_volt = false;
        // send high volt
    }
    if( i == 20)
    {
        five_volt = true;
        // send five bool
        low_volt = true;
        // send low volt
        high_volt = false;
        // send high volt
    }
    if(i == 30)
    {
        five_volt = true;
        // send five bool
        low_volt = true;
        // send low volt
        high_volt = true;
        // send high volt
        __timer->stop();
    }
}

void Control_Head::Time_MicroSec()
{
    Micro_timer.start();
    if(Micro_timer.nsecsElapsed() == 100000)
    {
        i = 10;
    }
}
