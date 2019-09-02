/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef LINE_H
#define LINE_H

#include "shape.h"
#include <QPainter>
#include <QWidget>

#include "pool_shapes.h"
#include <QPaintEngine>
#include <QRect>
#include <QLine>

class QLine;

class Line : public Shape, QWidget
{
public:
    Line();
    // Content of all Line and point of Line's
    std::vector<Pool_Shapes *> Pool_Line(std::vector<Line *>);
  //  virtual int Index_Shape()const override;
 //   virtual void Shape_create()const override;
private:
    void Draw_Line(int x1, int x2, int y1, int y2)const ;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
    QPainter *__Painter;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // LINE_H
