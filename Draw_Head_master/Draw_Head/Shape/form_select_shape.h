/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef FORM_SELECT_SHAPE_H
#define FORM_SELECT_SHAPE_H

#include <QWidget>

namespace Ui {
class Form_Select_shape;
}

class Form_Select_shape : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Select_shape(QWidget *parent = nullptr);
    ~Form_Select_shape();

private:
    Ui::Form_Select_shape *ui;
};

#endif // FORM_SELECT_SHAPE_H
