/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "polygun.h"

int Polygun::Index_Shape_polygun = 0;

Polygun::Polygun()
{
    //QObject::connect(this, SIGNAL( poygun_create_changed(int)), this, SLOT(poygun_create_changed_Action(int)));
}

QList<Node *> Polygun::_Edge() const
{
    return list_node;
}

QList<Edge *> Polygun::_Node() const
{
    return list_edge;
}

int Polygun::Index_Shape() const
{
    return 0;
}

void Polygun::Shape_create() const
{
    
}

std::vector<Pool_Shapes *> Polygun::Pool_Polygun()
{
    std::vector<Pool_Shapes *> __polygun;
    postion();
    return __polygun;
}

std::vector<int> Polygun::__points()
{
    int Y1, Y2, X1, X2, Y4, Y3, X3, X4;
    int exi1 = static_cast<int>(fabs(X1 - Y1));
    int exi2 = static_cast<int>(fabs(X2 - Y2));
    int exi3 = static_cast<int>(fabs(X3 - Y3));
    int exi4 = static_cast<int>(fabs(X4 - Y4));
    std::vector<int> __exi;
    __exi.push_back(exi1);
    __exi.push_back(exi2);
    __exi.push_back(exi3);
    __exi.push_back(exi4);
    return  __exi;
}

int Polygun::poygun_create_changed_Action()
{
    Index_Shape_polygun += 1;
    return Index_Shape_polygun;
}

QRectF Polygun::boundingRect() const
{
    return  __rect;
}

void Polygun::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(painter)
    Q_UNUSED(option)
    Q_UNUSED(widget)
}

void Polygun::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
}

void Polygun::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e)
    //emit poygun_create_changed(1);
}

void Polygun::mousePressEvent(QGraphicsSceneMouseEvent *e)
{
    Q_UNUSED(e)
}
