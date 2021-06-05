/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "circle.h"
#include <cmath>

int Circle::Index_Shape_circle = 0;

Circle::Circle()
{
    //QObject::connect(this, SIGNAL(circle_create_changed(int)), this, SLOT(circle_create_changed_Action(int)));
}

void Circle::create()
{
    static std::vector<std::vector<int>>circle_data;
    __Painter->drawEllipse(X1, Y1, X2, Y2);
    int d = static_cast<int>((Y2 / Y1)/2);
    for (int i = 0; i<360; i++) {
        d = i;
        circle_data[0].push_back(static_cast<int>(i * d * cos(i)));
    }
}

int Circle::Index_Shape() const
{
    /*
    Index_Shape_circle += 1;
    return Index_Shape_circle;*/
    return 1;
}

void Circle::Shape_create() const
{

}

std::vector<Pool_Shapes *> Circle::poo_circle()
{
    std::vector<Pool_Shapes *> __circle;
    return __circle;
}

std::vector<int> Circle::__points()
{
    int exi = static_cast<int>(fabs(Y1 - X1));
    std::vector<int> __exi;
    __exi.push_back(exi);
    return  __exi;
}

int Circle::circle_create_changed_Action()
{
    Index_Shape_circle += 1;
    return Index_Shape_circle;
}

void Circle::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    create();
}

void Circle::mousePressEvent(QMouseEvent *e)
{
    X1 = e->x();
    Y1 = e->y();
    emit circle_create_changed(1);
}

void Circle::closeEvent(QCloseEvent *e)
{
    e->accept();
}
