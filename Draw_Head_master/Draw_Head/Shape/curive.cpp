/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "curive.h"

int Curive::Index_Shape_circle = 0;

Curive::Curive()
{
    //QObject::connect(this, SIGNAL( curive_create_changed(int)), this, SLOT(curive_create_changed_Action(int)));
}

int Curive::Index_Shape() const
{
    return 0;
}

void Curive::Shape_create() const
{

}

std::vector<Pool_Shapes *> Curive::Pool_Curive()
{
    std::vector<Pool_Shapes *> __curive;

    return __curive;
}

std::vector<int> Curive::__points()
{
    int Y1 = 0, Y2 = 0, X1 = 0, X2 = 0, Y4 = 0, Y3 = 0, X3 = 0, X4 = 0;
    int exi1 = static_cast<int>(fabs((X1 - Y1)* sin(X1)));
    int exi2 = static_cast<int>(fabs((X2 - Y2)* sin(X1)));
    int exi3 = static_cast<int>(fabs((X3 - Y3)* sin(X1)));
    int exi4 = static_cast<int>(fabs((X4 - Y4)* sin(X1)));
    std::vector<int> __exi;
    __exi.push_back(exi1);
    __exi.push_back(exi2);
    __exi.push_back(exi3);
    __exi.push_back(exi4);
    return  __exi;
}

int Curive::curive_create_changed_Action()
{
    Index_Shape_circle += 1;
    return Index_Shape_circle;
}

void Curive::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    painter.drawArc(10, 10, 10, 10, 10, 1);
}

void Curive::mousePressEvent(QMouseEvent *e)
{
    emit curive_create_changed(1);
}

void Curive::closeEvent(QCloseEvent *e)
{
    e->accept();
}

void Curive::Draw_Curive(std::vector<int> __Draw)
{
    __Draw.push_back(10);
    __Draw.push_back(11);
    __Draw.push_back(12);
}
