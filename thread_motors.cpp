//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com

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

}

bool Thread_Motors::isRunning() const
{

}

int Thread_Motors::loopLevel() const
{

}

void Thread_Motors::requestInterruption()
{

}

void Thread_Motors::setPriority(Thread_Motors::Priority priority)
{

}

bool Thread_Motors::wait(unsigned long time)
{

}

void Thread_Motors::start(Thread_Motors::Priority priority)
{

}

void Thread_Motors::terminate()
{

}

int Thread_Motors::exec()
{

}

void Thread_Motors::run()
{

}
