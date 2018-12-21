#ifndef NODE_H
#define NODE_H

//#include "edge.h"
class GraphWidget;
#include <QList>
#include <QGraphicsItem>

QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
QT_END_NAMESPACE

class Edge;
class QPointF;

class Node:public QGraphicsItem
{
public:
    Node(GraphWidget *graphWidget);
    void addedge(Edge *edge);


    QList<Edge *> __Node()const;
    void __CountPoint()const;

    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;

private:
    //  Edge *_Edge;
    QList<Edge *>  _Edge;
    QPointF newPos;
    GraphWidget *graph;
};

#endif // NODE_H
