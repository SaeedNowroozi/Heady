#ifndef CURIVE_H
#define CURIVE_H

#include"shape.h"
//#include "node.h"
//#include "edge.h"
#include <QWidget>
#include <vector>

#include<QPainter>

class Curive : public Shape, QWidget
{
public:
    Curive();
protected:
    void paintEvent(QPaintEvent *event);
private:
    void Draw_Curive(std::vector<int>, QPainter);

    QPainter *__Painter;
  //  Node *_Node;
  //  Edge *_Edge;
};

#endif // CURIVE_H
