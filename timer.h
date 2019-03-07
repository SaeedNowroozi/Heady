#ifndef TIMER_H
#define TIMER_H

#include <QTimer>

#include "Main\chart.h"
#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"

#include <chrono>

class Timer :public QTimer
{
public:
    Timer();
    ~Timer();
    //void _time_Algouritm( QTimer t, int _start, int _finish, Chart _rectangle );
    //void QTimer::start(std::chrono::milliseconds);
    int _interval()const;
    //std::chrono::milliseconds _intervalAsDuration()const;
    bool _isActive()const;
    void _start(std::chrono::milliseconds msec);

public slots:
    void start(int);
    void stop();
private:
    QTimer * _timer;
  //  Chart  * _chart;
    Interface_FPGA * __interfacefpga;
};

#endif // TIMER_H
