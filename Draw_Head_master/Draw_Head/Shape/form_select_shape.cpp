/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "form_select_shape.h"
#include "ui_form_select_shape.h"

Form_Select_shape::Form_Select_shape(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Select_shape)
{
    ui->setupUi(this);

}

Form_Select_shape::~Form_Select_shape()
{
    delete ui;
}
