/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#ifndef NODE_H
#define NODE_H

//#include "edge.h"
class GraphWidget;
#include <QList>
#include <QGraphicsItem>

#include <utility>

QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
QT_END_NAMESPACE

#include"Shape/shape.h"
#include "Shape/pool_shapes.h"

class Edge;
class QPointF;

class Node:public QGraphicsItem, Shape
{
public:
    Node(GraphWidget *graphWidget);
    void addedge(Edge *edge);
    // Content of all Node and point of Rectangle's
    static std::vector<Pool_Shapes *> Pool_Node();

    QList<Edge *> __Node()const;
    void __CountPoint()const;

    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    void mousePressEvent(QMouseEvent *e) override;
    void closeEvent(QCloseEvent *e)override;
private:
    //  Edge *_Edge;
    QList<Edge *>  _Edge;
    QPointF newPos;
    GraphWidget *graph;
    Pool_Shapes *__pool_shape;
};

#endif // NODE_H
