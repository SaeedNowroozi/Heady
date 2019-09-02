/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "mouse_crouser.h"

Mouse_crouser::Mouse_crouser()
{

}

void Mouse_crouser::mouseMoveEvent(QMouseEvent *eventMove)
{
    eventMove->pos();
}

void Mouse_crouser::mousePressEvent(QMouseEvent *eventPress)
{
    eventPress->pos();
}

void Mouse_crouser::mouseReleaseEvent(QMouseEvent *releaseEvent)
{
    releaseEvent->pos();
}
