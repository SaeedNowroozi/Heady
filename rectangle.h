/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"shape.h"
#include "pool_shapes.h"
#include<QPainter>
#include <QWidget>
#include <QPaintEngine>
#include <QRect>
class QRect;

class Rectangle : public Shape, QWidget
{
public:
    Rectangle();
    void Create_Rect(int x1, int x2, int y1, int y2)const;
    // Content of all Rectangle and point of Rectangle's
    std::vector<Pool_Shapes *> Poo_Rectangle(std::vector<Rectangle *>);
 //   virtual int Index_Shape()const override;
 //   virtual void Shape_create()const override;
protected:
    //   paintEvent(QPaintEvent *event);
private:
    QPainter *__Painter;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
};

#endif // RECTANGLE_H
