/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "form_interface.h"
#include "ui_form_interface.h"

Form_interface::Form_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_interface)
{
    ui->setupUi(this);
}

Form_interface::~Form_interface()
{
    delete ui;
}
//USB botton
void Form_interface::on_pushButton_clicked()
{

}
//FPGA botton
void Form_interface::on_pushButton_2_clicked()
{

}
