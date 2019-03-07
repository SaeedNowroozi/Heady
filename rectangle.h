#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"shape.h"

#include<QPainter>
#include <QWidget>

class QRect;

class Rectangle : public Shape, QWidget
{
public:
    Rectangle();
protected:
 //   paintEvent(QPaintEvent *event);
private:
    QPainter *__Painter;
};

#endif // RECTANGLE_H
