/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <vector>
#include <QPainter>
#include <QWidget>
#include "pool_shapes.h"
#include <QPaintEngine>
#include <QRect>

class Circle : public  QWidget, Shape
{
public:
    Circle();
    void create();
  //  virtual int Index_Shape()const override;
   // virtual void Shape_create()const override;
    // Content of all circle and point of circle's
    std::vector<Pool_Shapes *> poo_circle(std::vector<Circle *>);
private:
    QPainter *__Painter;
    QPaintEngine *__paint_engine;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CIRCLE_H
