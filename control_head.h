#ifndef CONTROL_HEAD_H
#define CONTROL_HEAD_H

#include <vector>
#include <set>
#include <tuple>
#include <cassert>

//#include <QTime>
class QTime;
#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"
//#include "Convert/smart_algorithm.h"

class Smart_Algorithm;

class Control_Head
{
public:
    Control_Head();
    ~Control_Head();
    enum Cycle
    {
        A = 1,//
        B,//
        C//
    };
    enum DataStruchuer{
        NSS1 = 1,
        NSS2
    };
    void __PrintDataStruchuer(std::tuple<DataStruchuer, DataStruchuer> Data);
    void __Select(Cycle);
    std::vector<Cycle> CycleOrder(Cycle, bool PHO);
    void trigger(int trig);
    void __Sequencing__Voltage(bool five_volt, bool high_volt, bool low_volt);
    void __Max_Speed();
    void init_head();
private:
  //  QTime *__time;
    std::vector<Cycle> order;
    Interface_FPGA *__Interface_FPGA;
    Interface_USB  *__Interface_USB;
    Smart_Algorithm *__smart_algorthm;
    int enable;//enable head
};

#endif // CONTROL_HEAD_H4
