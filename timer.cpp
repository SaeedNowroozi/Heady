/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "timer.h"
#include <iostream>

Timer::Timer()
{

}

Timer::~Timer()
{
    delete _timer;
}

//void Timer::_time_Algouritm(QTimer t, int _start, int _finish, Chart _rectangle)
//{

//}
//interval fire head
int Timer::_interval() const
{
    int time;
    if( __interfacefpga->__Start())
    {
        time = _timer->interval();
        return time;
    }
    else {
        return 0;
    }
    return 0;
}

//std::chrono::milliseconds Timer::_intervalAsDuration() const
//{

//}

bool Timer::_isActive() const
{
    auto active = _timer->isActive();
    if(active == true)
        std::cout <<"timer is runnig";
    else
        std::cout<< "timer is stop";
    return active;
}

void Timer::_start(std::chrono::milliseconds msec)
{
    _timer->start(msec);
}
