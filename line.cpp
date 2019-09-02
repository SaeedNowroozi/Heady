/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "line.h"

Line::Line()
{

}

std::vector<Pool_Shapes *> Line::Pool_Line(std::vector<Line *>)
{
    std::vector<Pool_Shapes *> __line;
    postion();
    return __line;
}

void Line::Draw_Line(int x1, int x2, int y1, int y2) const
{
    __Painter->drawLine(y2, x1, x2, y1);

}

void Line::paintEvent(QPaintEvent *event)
{
    //    QPainter painter(this);
    //    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    //    painter.drawLine(0,0,200,200);
}
