/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "pic.h"

int Pic::Index_Shape_pic = 0;

Pic::Pic()
{
    QObject::connect(this, SIGNAL(pic_create_changed(int)), this, SLOT(pic_create_changed_Action(int)));
}

int Pic::pic_create_changed_Action()
{
    Index_Shape_pic += 1;
    return Index_Shape_pic;
}

void Pic::create_pic()
{
    emit pic_create_changed(1);
}
