//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com

#include "interface_fpga.h"
#include "Control/control_head.h"

const char *Interface_FPGA::error(unsigned code)
{
    switch (code) {
    case 0: return "error 0";
        break;
    case 1: return "error 1";
        break;
    case 2: return "error 2";
        break;
    case 3: return "error 3";
        break;
    default: return "unknown error code";
        break;
    }
}

Interface_FPGA::Interface_FPGA()
{
    __control_motor =new  Control_Motor(100);
    __control_head = new Control_Head();
}

bool Interface_FPGA::check(Interface_FPGA::SPI)
{

}

bool Interface_FPGA::Send(BYTE)
{

}

BYTE Interface_FPGA::_Get(const BYTE &)
{

}

bool Interface_FPGA::Get(BYTE)
{

}
//Config motor in first connection with fpga
bool Interface_FPGA::Config_motor()
{
    __control_motor->init();
    __control_motor->setAsHome();
    __control_motor->softFree();
    __control_motor->free();
}
//Config head in first connection with fpga
bool Interface_FPGA::Config_head()
{
    __control_head->init_head();
    __control_head->trigger(100);
    __control_head->__Sequencing__Voltage(true, true, true);
}

bool Interface_FPGA::__Start() const
{
    return true;
}

BYTE Interface_FPGA::Convert_Byte(int)
{

}


