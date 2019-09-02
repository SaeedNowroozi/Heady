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


#include"CyAPI_lib_cpp/inc/CyAPI.h"

#ifdef _DEBUG
#define VERIFY ASSERT
#define VERIFY_(result, expression) assert(result == expression)
#else
#define VERIFY(expression)(expression)
#define VERIFY(result, expression)(expression)
#endif

typedef  unsigned char BYTE;

class Interface_USB
{
public:
    Interface_USB();
private:
    bool __open();
    void __colse();
    BYTE __recive();
    bool __send();

private:
    CCyUSBDevice *usbdevice;
    CCyUSBEndPoint *usbendpoint;
};

#endif // INTERFACE_USB_H
