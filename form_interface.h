/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef FORM_INTERFACE_H
#define FORM_INTERFACE_H

#include <QWidget>

namespace Ui {
class Form_interface;
}

class Form_interface : public QWidget
{
    Q_OBJECT

public:
    explicit Form_interface(QWidget *parent = nullptr);
    ~Form_interface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form_interface *ui;
};

#endif // FORM_INTERFACE_H
