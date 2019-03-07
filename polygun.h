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

class Polygun : public Shape, QGraphicsItem, QWidget
{
public:
    Polygun();
    QList<Node *> _Edge()const;
    QList<Edge *> _Node()const;
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
