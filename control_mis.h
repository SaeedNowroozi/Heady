#ifndef CONTROL_MIS_H
#define CONTROL_MIS_H

#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"

#include <cassert>

typedef unsigned char BYTE;
class Control_Mis
{
public:
    Control_Mis();
    ~Control_Mis();
    void Stop();
    void Start();
    BYTE _Gaging();
    BYTE _Send_to_fpga()const;
private:
    bool _Send_Data_MPX4115AP(BYTE);
    bool _Get_Data_MPX4115AP(BYTE a);
    bool _Start_Vacuum_Pomp(BYTE aa);
    bool _Stop_Vacuum_Pomp(BYTE a);
    Interface_FPGA *__Interface_FPGA;
    Interface_USB  *__Interface_USB;
};

#endif // CONTROL_MIS_H
