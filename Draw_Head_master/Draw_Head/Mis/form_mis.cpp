/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "form_mis.h"
#include "ui_form_mis.h"

Form_mis::Form_mis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_mis)
{
    ui->setupUi(this);
}

Form_mis::~Form_mis()
{
    delete ui;
}
