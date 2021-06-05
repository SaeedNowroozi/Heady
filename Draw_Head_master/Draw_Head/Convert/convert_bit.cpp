/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embadded system lab 2017 - 2019
*/

#include "convert_bit.h"

Convert_Bit::Convert_Bit(std::pair<std::vector<int>, std::vector<int> > pix)
    :_pixel(pix)
{
    //  __shape = new Shape();
    __Convert_Pic = new Convert_Pic();
    __Convert_to_Pixel = new Convert_to_Pixel();
}
//vectors of bytes
std::vector<BYTE>::iterator Convert_Bit::byte(uchar a,
                                              std::pair<std::vector<int8_t>, std::vector<int8_t> >& _Array_Byte_x_y) const
{
    /* 8 bit's for vertical & 8 bit's horizental & 1 bit turn on pixel */
    // auto A_pixel = Pixel;
    Q_UNUSED(a)
    // Q_UNUSED(_Array_Byte_x_y)
  //  __Convert_to_Pixel->__ConPix();
    for(int i = 0; i <= __Convert_to_Pixel->Max_Pixel_Printable(); i++)
    {
        _Array_Byte_x_y.first.push_back(__Convert_to_Pixel->__ConPix(i));
        _Array_Byte_x_y.second.push_back(__Convert_to_Pixel->__ConPiy(i));
    }
    auto x = __Convert_to_Pixel->__Container_Pixel();
    auto y = __Convert_to_Pixel->__Container_Pixel();
    std::vector<BYTE>::iterator i;
    return i;
}

bool Convert_Bit::__get(Convert_Pic *)
{
    //__Convert_to_Pixel->convX(_pixel.first.pop_back(), _pixel.second.pop_back());
    auto get_pic = __Convert_to_Pixel->__Container_Pixel();

    return true;
}

bool Convert_Bit::__ge()
{
    return true;
}

std::pair<std::vector<int>, std::vector<bool> > *Convert_Bit::__counting()
{
    std::pair<std::vector<int>, std::vector<bool> > *lll = nullptr;
    lll->first.push_back(10);
    lll->second.push_back(true);
    return  lll;
}
