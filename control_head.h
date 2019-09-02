/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CONTROL_HEAD_H
#define CONTROL_HEAD_H

#include <vector>
#include <set>
#include <tuple>
#include <cassert>
#include <vector>
#include <list>
using namespace std;
#define Max_Speed_Head 200
typedef bool Black[127];
typedef int Nazzel[127];
//typedef std::list<Black> Horizental;
//typedef std::list<Horizental> Data_set_bit;
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
    Black heead;
    Nazzel __naz;
   // Data_set_bit __data_set_bit;
};

#endif // CONTROL_HEAD_H4
