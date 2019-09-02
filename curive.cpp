/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "curive.h"

Curive::Curive()
{

}

std::vector<Pool_Shapes *> Curive::Pool_Curive(std::vector<Curive *>)
{
    std::vector<Pool_Shapes *> __curive;
    return __curive;
}

void Curive::paintEvent(QPaintEvent *event)
{
    //    QPainter painter(this);
    //    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    //    painter.drawArc(10, 10, 10, 10, 10, 1);
}

void Curive::Draw_Curive(std::vector<int>, QPainter)
{
    __Painter->drawArc(10, 10, 12, 15, 18, 32);
    postion();
}
