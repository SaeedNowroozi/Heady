/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#ifndef EDGE_H
#define EDGE_H

#include <QList>
#include <QGraphicsItem>

#include "Shape/shape.h"
#include "Shape/pool_shapes.h"
class QPointF;
class Node;

class Edge :public QGraphicsItem, Shape
{
public:
    Edge(Node *sourcenode, Node *destnode);
    Node * sourcenode()const;
    Node * destnode()const;
    Edge(QList<Node *> _List_of_Node);
    QList<Node *> _Edge()const;
    void PointCount()const;
    // Content of all Edge and point of Edge's
    std::vector<Pool_Shapes *> Pool_Edge(std::vector<Edge *>);
  //  virtual int Index_Shape()const override;
   // virtual void Shape_create()const override;
protected:
    QRectF boundingRect()const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)override;
private:
    QPointF sourcePoint;
    QPointF destPoint;
    qreal arrowsize;
    Node  * _NodeSource,* _NodeDistance;
    QList<QPointF *> _PointPos;
    Pool_Shapes *__pool_shape;
};

#endif // EDGE_H
