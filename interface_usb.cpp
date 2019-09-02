/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "interface_usb.h"
#include <qlistwidget.h>

#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

Interface_USB::Interface_USB()
{
    usbdevice = new CCyUSBDevice((HANDLE)nullptr,CYUSBDRV_GUID,TRUE);

}

bool Interface_USB::__open()
{
    return  true;
}

void Interface_USB::__colse()
{

}

BYTE Interface_USB::__recive()
{

}

bool Interface_USB::__send()
{
    return true;
}
