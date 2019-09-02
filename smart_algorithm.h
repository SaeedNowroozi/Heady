/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef SMART_ALGORITHM_H
#define SMART_ALGORITHM_H

#include "Control/control_head.h"
#include "Control/control_motor.h"
#include "Shape/shape.h"
#include "Control/control_mis.h"
#include "convert_to_pixel.h"

#include "gradient_regulation.h"
#include "convert_bit.h"
class Timer;
#include <vector>
#include <iterator>
#include <map>
#include <set>
#include <QTimer>

typedef unsigned char BYTE;

class Smart_Algorithm : public Gradient_Regulation
{
public:
    //Struct Block Nozzle's
    struct Block{
        typedef unsigned int Block_0;
        typedef unsigned int Block_1;
        typedef unsigned int Block_2;
    };
    Smart_Algorithm();
    ~Smart_Algorithm();
    std::pair<std::vector<int>, std::vector<bool> > *__counting()const;
    bool __control()const;
    std::vector<BYTE>* __smart_alg()const;
   // std::vector<BYTE>::iterator __smart_alg_iterator;
    bool __finsh_bit()const;
private:
    //address Motor1 & Motor2
    long int Address(Control_Motor, Control_Motor)const;
    /* Select Nozzel's for printing */
    int Select_Nazzel();
    /* Select Motor's */
    int Select_Motor(Control_Motor *, Control_Motor *, Control_Motor *);
private:
   typedef std::pair<std::vector<int>,std::vector<int>>pix;
    void __set_speed();
    void __over_M2_speed(int);
    void __over_M3_speed(int);
    void __over_M2two_speed(int);
    void __over_M2three_speed(int);
    void __over_M3two_speed(int);
    void __over_M3three_speed(int);
    private:
    Control_Head   *__CH;
    Control_Motor  *__CM1;
    Control_Motor  *__CM2;
    Control_Motor  *__CM3;
    Control_Mis  *__CMis;
    Convert_Bit  *__Convert_Bit;
    //Shape  *__shape;
    Convert_to_Pixel  *__CtP;
    Timer  *__timer;

    //Gradient_Regulation  *__GRa;
};

#endif // SMART_ALGORITHM_H
