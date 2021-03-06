/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CONVERT_PIC_H
#define CONVERT_PIC_H

#include "Shape/shape.h"
#include "Main/mydir.h"
#include "Shape/pic.h"
#include "PNG/lodepng.h"
 using lodepng::State;
 class Convert_Pic
{
public:
     enum State : int{
         color = 1,
         uncolor = -1
     };
    Convert_Pic();
    void send_pic();
    void __Convert_PNG_to_Shape();
    void __Set_orgithm();
    void __set_pixel_DPI();
    int postion();

 private:
    Shape *__shape;
   MyDir *__Dir;
    Pic *__pic;
 };

#endif // CONVERT_PIC_H
