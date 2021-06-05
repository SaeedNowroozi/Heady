/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef LINE_H
#define LINE_H

#include "shape.h"

#include <utility>

#include <QPainter>
#include <QWidget>

#include "pool_shapes.h"
#include <QPaintEngine>
#include <QRect>
#include <QLine>

class QLine;

class Line : public Shape
{
public:
    Line();
    // Content of all Line and point of Line's
    static std::vector<Pool_Shapes *> Pool_Line();
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
    static int Index_Shape_line;
    //Number of printable points
    std::vector<int> __points();
signals:
    void line_create_changed(int __line);
public slots:
    int line_create_changed_Action();
private:
    void Draw_Line(int x1, int x2, int y1, int y2)const ;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
    QPainter *__Painter;
    static int Average;
    static int Average_y;
    int x_mouse;
    int y_mouse;
    Shape *__shape;
protected:
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *e)override;
    void closeEvent(QCloseEvent *e)override;
};

#endif // LINE_H
