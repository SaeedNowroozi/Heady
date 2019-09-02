/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "form_control.h"
#include "ui_form_control.h"

Form_control::Form_control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_control)
{
    ui->setupUi(this);
}

Form_control::~Form_control()
{
    delete ui;
}
