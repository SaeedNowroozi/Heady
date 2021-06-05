/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef FORM_INTERFACE_H
#define FORM_INTERFACE_H

#include <QMainWindow>
#include <QStandardItemModel>

#include "interface_fpga.h"
#include "interface_usb.h"

#include <QWidget>
#include <qt_windows.h>
#include <qlistwidget.h>
#include <QComboBox>
#include <QPushButton>
#include <QPlainTextEdit>

namespace Ui {
class Form_interface;
}

class Form_interface : public QWidget
{
    Q_OBJECT

public:
    explicit Form_interface(QWidget *parent = nullptr);
    ~Form_interface();
   void updateListView(QListWidget *listWidget);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form_interface *ui;
     QListWidget * listWidget;
     Interface_USB *usb;
     Interface_FPGA *fpga;
};

#endif // FORM_INTERFACE_H
