#ifndef LINE_H
#define LINE_H

#include "shape.h"

#include <QPainter>
#include <QWidget>
class QLine;

class Line : public Shape, QWidget
{
public:
    Line();
private:
    void Draw_Line(int width, int x1, int x2, int y1, int y2)const ;

    QPainter *__Painter;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // LINE_H
