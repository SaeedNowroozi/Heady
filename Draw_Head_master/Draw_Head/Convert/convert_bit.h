/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embadded system lab 2017 - 2019
*/
#ifndef CONVERT_BIT_H
#define CONVERT_BIT_H

#include "Shape/shape.h"
#include "convert_pic.h"
#include "convert_to_pixel.h"

#include <vector>
#include <iterator>
#include <utility>
#include <map>
#include <istream>
#include <ostream>
#include <tuple>

typedef unsigned char BYTE;
typedef std::tuple<int, int, bool> Pixel;

class Convert_Bit
{
public:

    explicit Convert_Bit(std::pair<std::vector<int>, std::vector<int>>pix);
    std::vector<BYTE>::iterator byte(uchar a, std::pair<std::vector<int8_t>, std::vector<int8_t> > &_Array_Byte_x_y)const;
    bool __get(Convert_Pic *);
    bool __ge();

    // Count bit shape
    std::pair<std::vector<int>, std::vector<bool> > *__counting();

private:
    Convert_Pic * __Convert_Pic;
    Convert_to_Pixel *__Convert_to_Pixel;
    std::pair <std::vector<int>, std::vector<int>>_pixel;
    std::vector<int> aa;
    std::vector<int> aaa;

};

#endif // CONVERT_BIT_H
