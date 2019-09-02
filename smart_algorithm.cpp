/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "smart_algorithm.h"
#include "Mis/timer.h"
static int select_motor;
static int select_speed;
std::vector<int>a = {1};
std::vector<int>b = {1};
Smart_Algorithm::Smart_Algorithm()
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

std::pair<std::vector<int>, std::vector<bool> > *Smart_Algorithm::__counting() const
{
    //    for(auto i =0; i<= __CtP->__Container_Pixel()->end(); ++i)
    //    {
    //        if(i = )
    //    }
    std::pair<std::vector<int>, std::vector<bool>> *a = nullptr ;
    return a;
}

bool Smart_Algorithm::__control() const
{
    __smart_alg();
    return true;
}

std::vector<BYTE> *Smart_Algorithm::__smart_alg() const
{
    std::pair<std::vector<int>, std::vector<bool>> count;
    // auto a;
    //    for(auto a = __counting(); a < __counting()->first.size(); ++a)
    //    {

    //    }
    std::vector<BYTE> * a = nullptr;
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
    return 1;
}

int Smart_Algorithm::Select_Motor(Control_Motor *, Control_Motor *, Control_Motor *)
{
    int i;
    switch (i) {
    case __CH->NSS1:
        Select_Motor(__CM1, NULL, NULL);
        break;
    case __CH->NSS2:
        Select_Motor(NULL, __CM2, NULL);
        break;
    default:
        Select_Motor(NULL, NULL, __CM3);
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
    else
        __CM2->free();
}
else
{
    if(select_speed == 1)
    {
       __over_M3_speed(3);
    }
    else if(select_speed == 2)
    {
        __over_M3two_speed(2);
    }
    else
        __CM2->free();
}
}

void Smart_Algorithm::__over_M2_speed(int)
{
    //  auto Over_Speed = __counting()->first.begin() + __counting()->second.begin();
    //  if()
    __CM2->move(1);
}

void Smart_Algorithm::__over_M3_speed(int)
{
    __CM2->move(1);
}

void Smart_Algorithm::__over_M2two_speed(int)
{
    __CM2->move(2);
    //__CM3->move(1);
}

void Smart_Algorithm::__over_M2three_speed(int)
{
    __CM2->move(3);
    //__CM3->move(3);
}

void Smart_Algorithm::__over_M3two_speed(int)
{
    __CM3->move(2);
}

void Smart_Algorithm::__over_M3three_speed(int)
{
    __CM3->move(3);
}
