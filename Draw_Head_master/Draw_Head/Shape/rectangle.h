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
#include <QObject>

#include <utility>

class QRect;

class Rectangle : public Shape
{
   Q_OBJECT
public:
    Rectangle();
    void Create_Rect(int x1, int x2, int y1, int y2)const;
    // Content of all Rectangle and point of Rectangle's
    static std::vector<Pool_Shapes *> Poo_Rectangle();
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
    static int Index_Shape_rectange;
    //Number of printable points
    std::vector<int> __points();
signals:
    void rectangle_create_changed(int __rectangle);
public slots:
    int rectangle_create_changed_Action();
protected:
    //   paintEvent(QPaintEvent *event);
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *e) override;
    void closeEvent(QCloseEvent *e)override;
private:
    QPainter *__Painter;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
};

#endif // RECTANGLE_H
