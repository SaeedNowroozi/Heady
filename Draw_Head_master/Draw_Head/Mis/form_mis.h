/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef FORM_MIS_H
#define FORM_MIS_H

#include <QWidget>

namespace Ui {
class Form_mis;
}

class Form_mis : public QWidget
{
    Q_OBJECT

public:
    explicit Form_mis(QWidget *parent = nullptr);
    ~Form_mis();

private:
    Ui::Form_mis *ui;
};

#endif // FORM_MIS_H
