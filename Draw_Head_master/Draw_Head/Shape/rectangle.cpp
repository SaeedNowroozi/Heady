/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "rectangle.h"

int Rectangle::Index_Shape_rectange =0;

Rectangle::Rectangle()
{
    //QObject::connect(this, SIGNAL(rectangle_create_changed(int)), this, SLOT(rectangle_create_changed_Action(int)));
}

void Rectangle::Create_Rect(int x1, int x2, int y1, int y2) const
{
    __Painter->drawRect(x1, x2, y1, y2);
}

std::vector<Pool_Shapes *> Rectangle::Poo_Rectangle()
{
    std::vector<Pool_Shapes *> __rectangle;
    //postion();
    return __rectangle;
}

int Rectangle::Index_Shape() const
{
    return  0;
}

void Rectangle::Shape_create() const
{

}

int Rectangle::rectangle_create_changed_Action()
{
    Index_Shape_rectange += 1;
    return Index_Shape_rectange;
}

void Rectangle::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
}

void Rectangle::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e)
    emit rectangle_create_changed(1);
}

void Rectangle::closeEvent(QCloseEvent *e)
{
   e->accept();
}

std::vector<int> Rectangle::__points()
{
    int Y1 = 0, Y2 = 0, X1 = 0, X2 = 0, Y4 = 0, Y3 = 0, X3 = 0, X4 = 0;
    int exi1 = static_cast<int>(fabs(X1 - Y1));
    int exi2 = static_cast<int>(fabs(X2 - Y2));
    int exi3 = static_cast<int>(fabs(X3 - Y3));
    int exi4 = static_cast<int>(fabs(X4 - Y4));
    std::vector<int> __exi;
    __exi.push_back(exi1);
    __exi.push_back(exi2);
    __exi.push_back(exi3);
    __exi.push_back(exi4);
    return  __exi;
}
