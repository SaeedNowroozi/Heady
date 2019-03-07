#ifndef INTERFACE_FPGA_H
#define INTERFACE_FPGA_H
#include "Control/control_motor.h"

//#include"Control/control_head.h"

#include <assert.h>

class Control_Head;

typedef unsigned char BYTE ;
class Interface_FPGA
{
public:
    const char *error(unsigned code);
    struct SPI{
        unsigned char SPI1 = 1;/* Motor 1 */
        unsigned char SPI2 = 2;/* Motor 2 */
        unsigned char SPI3 = 3;/* Motor 3 */
        unsigned char SP14 = 4;/* microcontroller */
        unsigned char SPI5 = 5;/* Head */
    };
    Interface_FPGA();
    /* Check SPI Protecol*/
    bool check(SPI);
    // Transmation
    bool Send(BYTE);
    // Resive
    bool Get(BYTE);
    //Config Motors
    bool Config_motor();
    //config head
    bool Config_head();
    //Start Head Fire
    bool __Start()const;
    BYTE _Get(const BYTE & );
private:
    BYTE Convert_Byte(int);
    Control_Motor * __control_motor;
    Control_Head * __control_head;
};

#endif // INTERFACE_FPGA_H
