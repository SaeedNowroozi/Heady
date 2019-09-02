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
#include<QPainter>

#include "pool_shapes.h"
#include <QPaintEngine>
#include <QRect>

class Curive : public Shape, QWidget
{
public:
    Curive();
 //   virtual int Index_Shape()const override;
 //   virtual void Shape_create()const override;
    // Content of all circle and point of Curive's
    std::vector<Pool_Shapes *> Pool_Curive(std::vector<Curive *>);
protected:
    void paintEvent(QPaintEvent *event);
private:
    void Draw_Curive(std::vector<int>, QPainter);

    QPainter *__Painter;
    QPaintEngine *__paint_engine;
    Pool_Shapes *_pool_shape;
    //  Node *_Node;
    //  Edge *_Edge;
};

#endif // CURIVE_H
