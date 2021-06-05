/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "line.h"

int Line::Average = 0;
int Line::Average_y = 0;

int Line::Index_Shape_line = 0;

Line::Line()
{
    //QObject::connect(this, SIGNAL(line_create_changed(int)), this, SLOT(line_create_changed_Action(int)));
}

std::vector<Pool_Shapes *> Line::Pool_Line()
{
    std::vector<Pool_Shapes *> __line;
    return __line;
}

int Line::Index_Shape() const
{
    return 0;
}

void Line::Shape_create() const
{

}

int Line::line_create_changed_Action()
{
    Index_Shape_line += 1;
    return Index_Shape_line;
}

void Line::Draw_Line(int x1, int x2, int y1, int y2) const
{
    std::vector<int>__line_x;
    std::vector<int>__line_y;
    __Painter->drawLine(y2, x1, x2, y1);
    Average = x1 - x2;
    Average_y = y1 - y2;
    for (int i = 1; i < Average; i++) {
        __line_x.push_back(x1 + i);
        __line_y.push_back(y1 + i);
    }
}

void Line::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    //    QPainter painter(this);
    //    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
    //    painter.drawLine(0,0,200,200);
    Draw_Line(x_mouse, y_mouse, 10 ,10);
}

void Line::mousePressEvent(QMouseEvent *e)
{
    x_mouse = e->x();
    y_mouse = e->y();
    //emit line_create_changed(1);
}

void Line::closeEvent(QCloseEvent *e)
{
    e->accept();
}

std::vector<int> Line::__points()
{
    int Y1 = 0, Y2 = 0, X1 = 0, X2 = 0, Y4, Y3, X3, X4;
    int exi1 = static_cast<int>(fabs((X1-X2) - (Y1-Y2)));
    std::vector<int> __exi;
    __exi.push_back(exi1);
    return  __exi;
}
