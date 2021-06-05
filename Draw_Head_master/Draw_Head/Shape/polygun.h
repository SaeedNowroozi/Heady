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
#include <utility>

#include <QList>
#include <QWidget>
class QPointF;
#include "node.h"
#include "edge.h"
#include "pool_shapes.h"
class Polygun : public Shape, QGraphicsItem
{
public:
    Polygun();
    QList<Node *> _Edge()const;
    QList<Edge *> _Node()const;
    virtual int Index_Shape()const override;
    virtual void Shape_create()const override;
    // Content of all Polygun and point of Polygun's
    std::vector<Pool_Shapes *> Pool_Polygun();
    static int Index_Shape_polygun;
    //Number of printable points
    std::vector<int> __points();
signals:
    void poygun_create_changed(int __polygun);
public slots:
    int poygun_create_changed_Action();
protected:
    QRectF boundingRect()const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)override;
    void paintEvent(QPaintEvent *event)override;
    void mousePressEvent(QMouseEvent *e)override;
    void mousePressEvent(QGraphicsSceneMouseEvent *e)override;
private:
    QPainter *__Painter;
    std::vector<int>::iterator smart;
    //  Node *_Node;
    // Edge *_Edge;
    QPointF sourcePoint;
    QPointF destPoint;
    QList<Edge *> list_edge;
    QList<Node *> list_node;
    QRectF __rect;
};

#endif // POLYGUN_H
