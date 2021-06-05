/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CONVERT_TO_PIXEL_H
#define CONVERT_TO_PIXEL_H

#include"Shape/shape.h"
#include"convert_pic.h"

#include <vector>
#include <map>
#include <string>
#include <iterator>
#include <utility>

typedef unsigned char BYTE;
typedef std::vector<std::pair<int, int>> Horizental;
typedef std::vector<std::pair<int, int>> Vertical;

class Convert_to_Pixel
{
public:
    Convert_to_Pixel();
    ~Convert_to_Pixel(){}
    void convX(std::pair<std::vector<int>, std::vector<int> > &pixel );
    void convY( std::pair<std::vector<int>, std::vector<int> > pixel );
    int8_t __ConPix(int)const;
    int8_t __ConPiy(int)const;
    int Max_Pixel_Printable();
    std::vector<int> __Container_Pixel();
private:
    Convert_Pic *__Convert_Pic;

};

#endif // CONVERT_TO_PIXEL_H
