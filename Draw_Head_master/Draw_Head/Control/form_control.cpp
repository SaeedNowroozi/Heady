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
    ui->__Nuber_Motor_X->setSegmentStyle(QLCDNumber::SegmentStyle::Outline);
    ui->__Nuber_Motor_X->setAutoFillBackground(true);
    ui->__Nuber_Motor_X->display(888);

    // ui->__Nuber_Motor_X->setPalette(Qt::gray);
    lcdpalette = new QPalette;
    lcdpalette->setColor(QPalette::Background, QColor(170, 255, 0));
    lcdpalette->setColor(QPalette::Base, QColor(170, 255, 0));
    lcdpalette->setColor(QPalette::AlternateBase, QColor(170, 255, 0));
    ui->__Nuber_Motor_X->setPalette(*lcdpalette);

    ui->__Nuber_Motor_Y->setSegmentStyle(QLCDNumber::SegmentStyle::Outline);
    ui->__Nuber_Motor_Y->setAutoFillBackground(true);
    ui->__Nuber_Motor_Y->display(888);

    // ui->__Nuber_Motor_X->setPalette(Qt::gray);
    lcdpalettee = new QPalette;
    lcdpalettee->setColor(QPalette::Background, QColor(170, 255, 0));
    lcdpalettee->setColor(QPalette::Base, QColor(170, 255, 0));
    lcdpalettee->setColor(QPalette::AlternateBase, QColor(170, 255, 0));
    ui->__Nuber_Motor_Y->setPalette(*lcdpalettee);

    ui->__Nuber_Motor_Z->setSegmentStyle(QLCDNumber::SegmentStyle::Outline);
    ui->__Nuber_Motor_Z->setAutoFillBackground(true);
    ui->__Nuber_Motor_Z->display(888);

    // ui->__Nuber_Motor_X->setPalette(Qt::gray);
    lcdpalett = new QPalette;
    lcdpalett->setColor(QPalette::Background, QColor(170, 255, 0));
    lcdpalett->setColor(QPalette::Base, QColor(170, 255, 0));
    lcdpalett->setColor(QPalette::AlternateBase, QColor(170, 255, 0));
    ui->__Nuber_Motor_Z->setPalette(*lcdpalett);

    change_number();
}

Form_control::~Form_control()
{
    delete ui;
}
void Form_control::change_number()
{
    i += 1;
    ui->__Nuber_Motor_X->display(i);
    ui->__Nuber_Motor_X->update();
}
