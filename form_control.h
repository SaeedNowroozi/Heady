/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef FORM_CONTROL_H
#define FORM_CONTROL_H

#include <QWidget>

namespace Ui {
class Form_control;
}

class Form_control : public QWidget
{
    Q_OBJECT

public:
    explicit Form_control(QWidget *parent = nullptr);
    ~Form_control();

private:
    Ui::Form_control *ui;
};

#endif // FORM_CONTROL_H
