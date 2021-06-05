 /*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embadded system lab 2017 - 2019
*/

#include "interface_usb.h"
#include <qlistwidget.h>

#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

#include <string>

using namespace std;

Interface_USB::Interface_USB()
{
    usbdevice = new CCyUSBDevice((HANDLE)nullptr, CYUSBDRV_GUID, TRUE);
}

void Interface_USB::__open()
{
    int numDevice = usbdevice->DeviceCount();
    for (int i = 0; i < numDevice; ++i) {
        usbdevice->Open(i);
        // qstrcpy(firendlyname, usbdevice->FriendlyName);
       //  qstrcpy(deviceName, usbdevice->DeviceName);
        __colse();
    }
}

void Interface_USB::__colse()
{
    usbdevice->Close();
}

BYTE Interface_USB::__recive()
{

}

void Interface_USB::__send()
{
    /* No support for Control tranfers now */
    if((usbendpoint->Address & 0x7F) == 0x00)
    {
        control_transfer = "Control transfers not supported at the moment\n";
    }

    /* No support for Isoc tranfers now */
    if(usbendpoint->Attributes == 1)
    {
        control_transfer= "Isochronous transfers not supported at the moment\n";
    }

    UCHAR * xferBuffer[usbendpoint->MaxPktSize];
    LONG xferLength = usbendpoint->MaxPktSize;

    /* Transfer 1 packet and check if that succeeds */
    if(usbendpoint->XferData((PUCHAR)xferBuffer, xferLength, (CCyIsoPktInfo*)0, (BOOL)true))
        byte_transfer = " bytes transfer was successful\n";
    else
       byte_transfer = " bytes transfer failed\n";
    //
}
