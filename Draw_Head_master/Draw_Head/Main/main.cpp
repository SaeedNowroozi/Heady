/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "mainwindow.h"
#include "Control/form_control.h"
#include "Interface/form_interface.h"
#include "Mis/form_mis.h"
#include "Shape/form_select_shape.h"
#include "form_chart.h"
#include <QApplication>
#include "mydir.h"

#include "Interface/interface_fpga.h"
#include "Interface/interface_usb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName("Open_dot");
    a.setApplicationName("Open.dot");
    a.setApplicationVersion("0.0.1");
    MainWindow w;
   // Interface_USB usbb;
   // usbb.__open();
    Form_control form_cont;
    form_cont.resize(80, 300);
    w.show();
 //   MyDir mydir;

    form_cont.show();

//    Form_interface form_int;
//    form_int.resize(80,100);
 //   form_int.show();
    Form_mis form_mi;
    form_mi.resize(100, 80);
    form_mi.show();
    Form_Select_shape form_sel;
    form_sel.resize(100,80);

    form_sel.show();
    Form_chart form_ch;
    form_ch.resize(80,80);
    form_ch.show();
    w.resize(1020,510);

    w.showMaximized();
    return a.exec();
}
