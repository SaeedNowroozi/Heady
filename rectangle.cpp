/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "rectangle.h"

Rectangle::Rectangle()
{

}

void Rectangle::Create_Rect(int x1, int x2, int y1, int y2) const
{
    __Painter->drawRect(x1, x2, y1, y2);
}

std::vector<Pool_Shapes *> Rectangle::Poo_Rectangle(std::vector<Rectangle *>)
{
    std::vector<Pool_Shapes *> __rectangle;
    postion();
    return __rectangle;
}

//Rectangle::paintEvent(QPaintEvent *event)
//{
// QPainter painter(this);
// painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
// painter.drawRect(10, 10, 20, 20);
//}
