/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CONVERT_PIC_H
#define CONVERT_PIC_H

#include "Shape/shape.h"
#include "Shape/circle.h"
#include "Shape/curive.h"
#include "Shape/line.h"
#include "Shape/polygun.h"
#include "Shape/rectangle.h"

#include "Convert/dpi_shape.h"

#include "Main/mydir.h"
#include "Shape/pic.h"
#include "PNG/lodepng.h"

#include <utility>
#include <vector>

using lodepng::State;
typedef unsigned char BYTE;

using namespace  std;

class Convert_Pic
{
public:
    enum State : int{
        color = 1,
        uncolor = -1
    };
    Convert_Pic();
    // send to Convert_to_pixel
    bool send_pic();
    //Convert png to pic
    void __Convert_PNG_to_Shape();
    // 
    void __Set_orgithm();
    //per 10 pixel is a dpi
    void __set_pixel_DPI();
    /*position page  print able
     0                     1000
     1000                  1000
    */
    int postion();

    // Send to convert pixel Class
    std::vector<BYTE> Send_to_Pixel()const;
private:
    //Shape *__shape;
    vector<BYTE> __Send_Pic;
    MyDir *__Dir;
    Pic *__pic;
    Circle *__cir;
    Curive *__cur;
    Line *__lin;
    Polygun *__poly;
    DPI_Shape *__dpi;
};

#endif // CONVERT_PIC_H
