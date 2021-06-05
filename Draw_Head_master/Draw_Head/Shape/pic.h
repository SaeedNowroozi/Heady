/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef PIC_H
#define PIC_H

#include "Main/mydir.h"
#include <QObject>
class Pic: public QObject
{
    Q_OBJECT
public:
    Pic();
    static int Index_Shape_pic;
signals:
    void pic_create_changed(int __circle);
public slots:
    int pic_create_changed_Action();
private:
    void create_pic();
    MyDir *__dir;
};

#endif // PIC_H
