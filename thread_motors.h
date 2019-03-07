#ifndef THREAD_MOTORS_H
#define THREAD_MOTORS_H

#include "Convert/smart_algorithm.h"
#include "Control/control_mis.h"
#include "Control/control_motor.h"
#include <QThread>
#include <QThreadPool>

class Thread_Motors
{
public:
    enum Priority{ IdlePriority, LowestPriority, LowPriority, NormalPriority, InheritPriority };
    Thread_Motors();
    void Optimuze();
    void exit(int);
    bool isFinished()const;
    bool isRunning()const;
    int loopLevel()const;
    Priority priority()const;
    void requestInterruption();
    void setPriority(Priority priority);
    bool wait(unsigned long time = ULONG_MAX);
public slots:
void quit();
    void start(Priority priority = InheritPriority);
    void terminate();
protected:
    int exec();
    virtual void run();
private:
  //  Control_Head *__Control_Head;
    Control_Mis *__Control_Mis;
    Control_Motor *__Control_Motor;
    int __Motor_Init;

};

#endif // THREAD_MOTORS_H
