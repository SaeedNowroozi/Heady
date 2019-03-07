#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include<QPainter>
#include <QWidget>

class Circle : public Shape, QWidget
{
public:
    Circle();
    void create();

private:
    QPainter *__Painter;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CIRCLE_H
