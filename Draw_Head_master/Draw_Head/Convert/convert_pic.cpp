//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com
//university of Tabriz, embadded system lab 2017 - 2019

#include "convert_pic.h"

#include <vector>
#include <iterator>

Convert_Pic::Convert_Pic()
{
    __Dir = new MyDir();
}

bool Convert_Pic::send_pic()
{
    __set_pixel_DPI();
    __Set_orgithm();
    postion();
    if(__Send_Pic.data() != nullptr){
        return  true;
    }

    return false;
}

void Convert_Pic::__Convert_PNG_to_Shape()
{

}

void Convert_Pic::__Set_orgithm()
{
    __cir->poo_circle();
    __cur->Pool_Curive();
    __lin->Pool_Line();
    __poly->Pool_Polygun();
}

void Convert_Pic::__set_pixel_DPI()
{
     __dpi->regular_DPI();
}

int Convert_Pic::postion()
{
    return 1;
}

std::vector<BYTE> Convert_Pic::Send_to_Pixel() const
{
    vector<BYTE> __Send;
    __Send.push_back(10);
    return __Send;
}
