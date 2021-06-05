/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "thread_motors.h"

Thread_Motors::Thread_Motors()
{
    __Control_Mis = new Control_Mis();
    __Control_Motor = new Control_Motor( __Motor_Init );
}

void Thread_Motors::exit(int)
{

}

bool Thread_Motors::isFinished() const
{
    return  true;
}

bool Thread_Motors::isRunning() const
{
    return true;
}

int Thread_Motors::loopLevel() const
{
    return 1;
}

void Thread_Motors::requestInterruption()
{

}

void Thread_Motors::setPriority(Thread_Motors::Priority priority)
{
    Q_UNUSED(priority);
}

bool Thread_Motors::wait(unsigned long time)
{
    Q_UNUSED(time);
    return true;
}

void Thread_Motors::start(Thread_Motors::Priority priority)
{
    Q_UNUSED(priority);
}

void Thread_Motors::terminate()
{

}

int Thread_Motors::exec()
{
    return 0;
}

void Thread_Motors::run()
{

}
