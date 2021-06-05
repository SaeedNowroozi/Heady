/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <vector>
#include <utility>
#include <cmath>

#include <QPainter>
#include <QWidget>
#include "pool_shapes.h"
#include <QPaintEngine>
#include <QRect>
#include <QObject>
#include <vector>

#define PI 3.14159265359

class Circle : public Shape
{
    Q_OBJECT
public:
    Circle();
    void create();
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
    // Content of all circle and point of circle's
    static std::vector<Pool_Shapes *> poo_circle();
    static int Index_Shape_circle;
    //Number of printable points
    std::vector<int> __points();

signals:
    void circle_create_changed(int __circle);

public slots:
    int circle_create_changed_Action();

private:
    QPainter *__Painter;
    Shape *__shape;
    QPaintEngine *__paint_engine;
    int X1, X2, Y1, Y2;

protected:
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *e) override;
    void closeEvent(QCloseEvent *e)override;

};

#endif // CIRCLE_H
