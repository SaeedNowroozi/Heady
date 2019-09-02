/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "polygun.h"

Polygun::Polygun()
{

}

QList<Node *> Polygun::_Edge() const
{

}

QList<Edge *> Polygun::_Node() const
{

}

std::vector<Pool_Shapes *> Polygun::Pool_Polygun(std::vector<Polygun *>)
{
    std::vector<Pool_Shapes *> __polygun;
    postion();
    return __polygun;
}

QRectF Polygun::boundingRect() const
{

}

void Polygun::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}

void Polygun::paintEvent(QPaintEvent *event)
{
    //    QPainter painter(this);
    //    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
}
