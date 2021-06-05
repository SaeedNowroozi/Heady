/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "shape.h"
#include "QPainter"
// count for shape
int Shape::counter = 0;
//    //continer for shape
vector<int> Shape::count ;

Shape::Shape()
{

}

bool Shape::operator !() const
{
    return true;
}

bool Shape::operator !=(const Shape &__Shape) const
{
    Q_UNUSED(__Shape)
    return  true;
}

bool Shape::operator ==(const Shape &) const
{
    return true;
}

const Shape &Shape::operator =(const Shape &)
{

}
void Shape::paintEven()
{
    QPainter paint;
    QPen paintpen2(Qt::blue);
    paintpen2.setWidth(8);

    QPoint p1;
    p1.setX(30);
    p1.setY(20);

    QPoint p2;
    p2.setX(150);
    p2.setY(150);

    paint.setPen(paintpen2);
    paint.drawLine(p1,p2);

}

void Shape::Rectangle()
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    painter.drawRect(10, 10, 20, 20);
}

void Shape::Ellipse()
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    painter.drawEllipse(10, 10, 20, 20);
}

void Shape::Polygun()
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    painter.drawArc(10, 10, 10, 10, 10, 1);
}

void Shape::Fill(bool)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    painter.drawRect(10, 10, 20, 20);
}

bool Shape::end_shape() const
{
    return true;
}

int Shape::postion()
{
    return 1;
}
