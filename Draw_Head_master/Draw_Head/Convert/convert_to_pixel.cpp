/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "convert_to_pixel.h"
#include <iterator>

Convert_to_Pixel::Convert_to_Pixel()
{
    auto m = __Convert_Pic->Send_to_Pixel();
}
//search Y
void Convert_to_Pixel::convX(std::pair<std::vector<int>, std::vector<int> > &pixel)
{
    pixel.first.push_back(10);
    pixel.second.push_back(14);
    pixel.first.push_back(11);
    pixel.second.push_back(12);
    pixel.first.push_back(13);
    pixel.second.push_back(14);
    pixel.first.push_back(15);
    pixel.second.push_back(16);
    pixel.first.push_back(18);
    pixel.second.push_back(19);
    pixel.first.push_back(19);
    pixel.second.push_back(16);
    pixel.first.push_back(18);
    pixel.second.push_back(17);
    pixel.first.push_back(10);
    pixel.second.push_back(16);
    pixel.first.push_back(17);
    pixel.second.push_back(13);
}

void Convert_to_Pixel::convY(std::pair<std::vector<int>, std::vector<int> > pixel)
{
    pixel.first.push_back(10);
    pixel.second.push_back(14);
}

int8_t Convert_to_Pixel::__ConPix(int pix) const
{
    Q_UNUSED(pix)
    return 100;
}

int8_t Convert_to_Pixel::__ConPiy(int pix) const
{
    Q_UNUSED(pix)
    return 1;
}

int Convert_to_Pixel::Max_Pixel_Printable()
{
    return 1;
}

std::vector<int> Convert_to_Pixel::__Container_Pixel()
{
    std::vector<int> a;
    a.push_back(10);
    return a;
}
