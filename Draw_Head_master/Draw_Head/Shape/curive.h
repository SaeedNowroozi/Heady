/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CURIVE_H
#define CURIVE_H

#include"shape.h"
//#include "node.h"
//#include "edge.h"
#include <QWidget>
#include <vector>
#include <utility>

#include "pool_shapes.h"

#include<QPainter>
#include <QPaintEngine>
#include <QRect>
#include <QObject>

class Curive : public Shape {
    Q_OBJECT
public:
    Curive();
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
    // Content of all circle and point of Curive's
    static std::vector<Pool_Shapes *> Pool_Curive();
    static int Index_Shape_circle;
    //Number of printable points
    std::vector<int> __points();
signals:
    void curive_create_changed(int __curive);
public slots:
    int curive_create_changed_Action();
protected:
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *e) override;
    void closeEvent(QCloseEvent *e)override;
private:
    void Draw_Curive(std::vector<int> __Draw);
private:
    QPainter *__Painter;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
    //  Node *_Node;
    //  Edge *_Edge;
};

#endif // CURIVE_H
