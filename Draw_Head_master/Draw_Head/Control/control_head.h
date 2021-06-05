/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embadded system lab 2017 - 2019
*/
#ifndef CONTROL_HEAD_H
#define CONTROL_HEAD_H

#define Max_Speed_Head 200

#include <boost/array.hpp>

#include <vector>
#include <set>
#include <tuple>
#include <cassert>
#include <vector>
#include <list>
#include <utility>


#include <QObject>
#include <QTimer>
#include <QElapsedTimer>

using namespace std;
using namespace boost;

typedef bool Black[127];
typedef int  Nazzel[127];
//typedef std::list<Black> Horizental;
//typedef std::list<Horizental> Data_set_bit;

#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"
//#include "Convert/smart_algorithm.h"

class Smart_Algorithm;

class Control_Head : public QObject
{
    Q_OBJECT
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
    void __PrintDataStruchuer(std::tuple<DataStruchuer, DataStruchuer> Data[]);
    int * __Select(Cycle);
    std::vector<Cycle> CycleOrder(Cycle, bool PHO);
    void trigger(qint8 trig);
    void __Sequencing__Voltage();
    void __Max_Speed();
    void init_head();

public slots:
    void seque();
private:
    void Time_MicroSec();
private:
    int i = 0;// sequencing timer
    int enable;//enable head
    bool five_volt;
    bool high_volt;
    bool low_volt;
    QTimer *__timer;
    std::vector<Cycle> order;
    Interface_FPGA *__Interface_FPGA;
    Interface_USB  *__Interface_USB;
    Smart_Algorithm *__smart_algorthm;
    Black Head;
    Nazzel __Nazzel;
    QElapsedTimer Micro_timer;
};

#endif // CONTROL_HEAD_H4
