/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "node.h"
#include "edge.h"

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QStyleOption>

Edge::Edge(Node *sourcenode, Node *destnode):
    arrowsize(1)
{
    _NodeSource = sourcenode;
    _NodeDistance = destnode;

}

Node *Edge::sourcenode() const
{
    return _NodeSource;
}

Node *Edge::destnode() const
{
    return _NodeDistance;
}

Edge::Edge(QList<Node *> _List_of_Node)
{

}

QList<Node *> Edge::_Edge() const
{

}

void Edge::PointCount() const
{

}
QRectF Edge::boundingRect()const
{
    //    if (!source || !dest)
    //        return QRectF();

    qreal penWidth = 1;
    qreal extra = (penWidth + 10) / 2.0;

    return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
            .normalized()
            .adjusted(-extra, -extra, extra, extra);
}
void Edge::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    //    if (!sourcePoint || !destPoint)
    //        return;

    //    QLineF line(sourcePoint, destPoint);
    //    if (qFuzzyCompare(line.length(), qreal(0.)))
    //        return;
    //    //! [4]

    //    //! [5]
    //    // Draw the line itself
    //    painter->setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    //    painter->drawLine(line);
    //    //! [5]

    //! [6]
    // Draw the arrows
    //    double angle = ::acos(line.dx() / line.length());
    //    if (line.dy() >= 0)
    //        angle = TwoPi - angle;

    //    QPointF sourceArrowP1 = sourcePoint + QPointF(sin(angle + Pi / 3) * arrowSize,
    //                                                  cos(angle + Pi / 3) * arrowSize);
    //    QPointF sourceArrowP2 = sourcePoint + QPointF(sin(angle + Pi - Pi / 3) * arrowSize,
    //                                                  cos(angle + Pi - Pi / 3) * arrowSize);
    //    QPointF destArrowP1 = destPoint + QPointF(sin(angle - Pi / 3) * arrowSize,
    //                                              cos(angle - Pi / 3) * arrowSize);
    //    QPointF destArrowP2 = destPoint + QPointF(sin(angle - Pi + Pi / 3) * arrowSize,
    //                                              cos(angle - Pi + Pi / 3) * arrowSize);

    //    painter->setBrush(Qt::black);
    //    painter->drawPolygon(QPolygonF() << line.p1() << sourceArrowP1 << sourceArrowP2);
    //    painter->drawPolygon(QPolygonF() << line.p2() << destArrowP1 << destArrowP2);

}
