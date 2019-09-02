/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "convert_bit.h"


Convert_Bit::Convert_Bit(std::pair<std::vector<int>, std::vector<int> > pix)
    :_pixel(pix)
{
    __shape = new Shape();
    __Convert_Pic = new Convert_Pic();
    __Convert_to_Pixel = new Convert_to_Pixel();
}
//vectors as bytes
std::vector<BYTE> Convert_Bit::byte(uchar a, std::pair<std::vector<uchar>, std::vector<uchar> >& _Array_Byte_x_y) const
{
    /* 8 bit's for vertical & 8 bit's horizental & 1 bit turn on pixel */
    // auto A_pixel = Pixel;
    auto x = __Convert_to_Pixel->__Container_Pixel();
    auto y = __Convert_to_Pixel->__Container_Pixel();
    std::vector<BYTE> gathring;
//    for (auto __con = _Array_Byte_x_y;__con.first.end(), __con.second.end();__con ++) {

//    }
    return  gathring;
}

bool Convert_Bit::__get(Convert_Pic *)
{
    return true;
}
