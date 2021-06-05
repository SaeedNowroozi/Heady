/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef INTERFACE_USB_H
#define INTERFACE_USB_H

#include <cassert>
#include <QMainWindow>
#include <QStandardItemModel>
#include <qt_windows.h>
#include <qlistwidget.h>

#include <utility>

#include"CyAPI_lib_cpp/inc/CyAPI.h"

//#ifdef _DEBUG
//#define VERIFY ASSERT
//#define VERIFY_(result, expression) assert(result == expression)
//#else
//#define VERIFY(expression)(expression)
//#define VERIFY(result, expression)(expression)
//#endif

typedef  unsigned char BYTE;

class Interface_USB
{
public:
    Interface_USB();
    //char firendlyname[256];
  //  char deviceName[256];
    QString control_transfer;
    QString byte_transfer;
    void __open();
     CCyUSBDevice *usbdevice;
private:

    void __colse();
    BYTE __recive();
    void __send();

private:

    CCyUSBEndPoint *usbendpoint;
};

#endif // INTERFACE_USB_H
