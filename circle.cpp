/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "circle.h"

Circle::Circle()
{

}

void Circle::create()
{
    __Painter->drawEllipse(10, 12, 40, 50);
}

//int Circle::Index_Shape() const
//{

//}

//void Circle::Shape_create() const
//{

//}

std::vector<Pool_Shapes *> Circle::poo_circle(std::vector<Circle *>)
{
    std::vector<Pool_Shapes *> __circle;
    postion();
    return __circle;
}

void Circle::paintEvent(QPaintEvent *event)
{
    //    QPainter painter(this);
    //    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    //    painter.drawEllipse(10, 10, 20, 20);
}
