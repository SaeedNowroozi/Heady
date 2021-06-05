/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "smart_algorithm.h"
#include "Mis/timer.h"

int Smart_Algorithm::select_motor = 0;
int Smart_Algorithm::select_speed = 0;

Smart_Algorithm::Smart_Algorithm():__timer(new Timer)
{
    __Convert_Bit = new Convert_Bit(pix(a,b));
    __CH = new Control_Head();
    __CM1 = new Control_Motor(100);
    __CM2 = new Control_Motor(100);
    __CM3 = new Control_Motor(100);
    __CtP = new Convert_to_Pixel();
}

Smart_Algorithm::~Smart_Algorithm()
{
    delete __Convert_Bit;
    delete __CH;
    delete __CM1;
    delete __CM2;
    delete __CM3;
    delete __CtP;
}

std::pair<std::vector<int>, std::vector<bool>> *Smart_Algorithm::__counting() const
{
    std::pair<std::vector<UCHAR>, std::vector<UCHAR>> ee;
    std::pair<std::vector<int>, std::vector<bool>> * return_counting = nullptr;
    for(int i = 0;i <= 3; i++) {
        return_counting->first.push_back(10);
        return_counting->second.push_back(true);
    }
    return  return_counting;
}

bool Smart_Algorithm::__control() const
{
    __smart_alg();
    __itu->__itu_check();
    __dpi->regular_DPI();
    return true;
}

std::vector<BYTE> *Smart_Algorithm::__smart_alg() const
{
    std::pair<std::vector<int>, std::vector<bool>> count;
    std::vector<BYTE> * a = nullptr;
    a->push_back(10);
    return a;
}

bool Smart_Algorithm::__finsh_bit() const
{
    return true;
}

long Smart_Algorithm::Address(Control_Motor, Control_Motor) const
{
    return 1;
}

int Smart_Algorithm::Select_Nazzel()
{
    int index = 0;
    int position[10000];
    bool value[10000];
    auto countt = __counting();
    Q_UNUSED(position)
    Q_UNUSED(value)
    Q_UNUSED(countt)
    for (auto i= 0;i <= 100000; i++){
        if(i > 128)
        {
            index += 1;
            // position[i] = __counting()->first.pop_back();
            // value[i] = countt->second.pop_back();
        }
    }
    return 1;
}

int Smart_Algorithm::Select_Motor(Control_Motor __motor_select, SELECT sel)
{
    switch (sel) {
    case MOTORX:
        select_motor = 1;
        __motor_select.softFree();
        break;
    case MOTORY:
        select_motor = 8;
        __motor_select.softFree();
        break;
    case MOTORZ:
        select_motor = 2;
        __motor_select.softFree();
        break;
    }
    return 1;
}

void Smart_Algorithm::__set_speed()
{
    if(select_motor == 1)
    {
        if(select_speed == 1)
        {
            __over_M2_speed(1);
        }
        else if(select_speed == 2)
        {
            __over_M2two_speed(2);
        }
        else {
            __CM2->free();
        }
    }
    else
    {
        if(select_speed == 8)
        {
            __over_M3_speed(3);
        }
        else if(select_speed == 9)
        {
            __over_M3two_speed(2);
        }
        else
            __CM2->free();
    }
}

void Smart_Algorithm::__over_M2_speed(int)
{
    __CM2->move(1);
}

void Smart_Algorithm::__over_M3_speed(int)
{
    __CM2->move(1);
}

void Smart_Algorithm::__over_M2two_speed(int)
{
    __CM2->move(2);
}

void Smart_Algorithm::__over_M2three_speed(int)
{
    __CM2->move(3);
}

void Smart_Algorithm::__over_M3two_speed(int)
{
    __CM3->move(2);
}

void Smart_Algorithm::__over_M3three_speed(int)
{
    __CM3->move(3);
}
