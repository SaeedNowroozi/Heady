#ifndef EDGE_H
#define EDGE_H

#include <QList>
#include <QGraphicsItem>
class QPointF;
class Node;

class Edge :public QGraphicsItem
{
public:
    Edge(Node *sourcenode, Node *destnode);
    Node * sourcenode()const;
    Node * destnode()const;
    Edge(QList<Node *> _List_of_Node);
    QList<Node *> _Edge()const;
    void PointCount()const;
protected:
    QRectF boundingRect()const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)override;
private:
    QPointF sourcePoint;
    QPointF destPoint;
    qreal arrowsize;
    Node  * _NodeSource,* _NodeDistance;
    QList<QPointF *> _PointPos;
};

#endif // EDGE_H
