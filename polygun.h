/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef POLYGUN_H
#define POLYGUN_H

#include "shape.h"
#include <QGraphicsItem>
#include<QPainter>
#include<vector>
#include <QList>
#include <QWidget>
class QPointF;
#include "node.h"
#include "edge.h"
#include "pool_shapes.h"
class Polygun : public Shape, QGraphicsItem, QWidget
{
public:
    Polygun();
    QList<Node *> _Edge()const;
    QList<Edge *> _Node()const;
  //  virtual int Index_Shape()const override;
  //  virtual void Shape_create()const override;
    // Content of all Polygun and point of Polygun's
    std::vector<Pool_Shapes *> Pool_Polygun(std::vector<Polygun *>);
protected:
    QRectF boundingRect()const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)override;
    void paintEvent(QPaintEvent *event);
private:
    QPainter *__Painter;
    std::vector<int>::iterator smart;
    //  Node *_Node;
    // Edge *_Edge;
    QPointF sourcePoint;
    QPointF destPoint;
};

#endif // POLYGUN_H
