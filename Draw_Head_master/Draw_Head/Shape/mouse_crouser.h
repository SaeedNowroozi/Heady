/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef MOUSE_CROUSER_H
#define MOUSE_CROUSER_H

#include <QTest>
#include <Qt3DInput/QMouseHandler>
#include <QMouseEvent>

class Mouse_crouser
{
public:
    Mouse_crouser();
    void mouseMoveEvent(QMouseEvent *eventMove);
    void mousePressEvent(QMouseEvent *eventPress);
    void mouseReleaseEvent(QMouseEvent *releaseEvent);
public slots:
    void setSourceDevice(Qt3DInput::QMouseDevice *mouseDevice);
};

#endif // MOUSE_CROUSER_H
