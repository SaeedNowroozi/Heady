/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "form_interface.h"
#include "ui_form_interface.h"
#include <qlistwidget.h>

Form_interface::Form_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_interface)
{
    ui->setupUi(this);
    // 9/15/2019
    listWidget = ui->listWidget_USB;
    updateListView(listWidget);
}

Form_interface::~Form_interface()
{
    delete ui;
}

void Form_interface::updateListView(QListWidget *listWidget)
{
    listWidget->clear();
    listWidget->addItem(usb->usbdevice->FriendlyName);
    listWidget->addItem(usb->usbdevice->DeviceName);
}
//USB botton
void Form_interface::on_pushButton_clicked()
{

}
//FPGA botton
void Form_interface::on_pushButton_2_clicked()
{

}
