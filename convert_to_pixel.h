#ifndef CONVERT_TO_PIXEL_H
#define CONVERT_TO_PIXEL_H

#include"Shape/shape.h"
#include"convert_pic.h"

#include <vector>
#include <map>
#include <string>

typedef unsigned char BYTE;

class Convert_to_Pixel
{
public:
    Convert_to_Pixel();
    void convX( std::pair<std::vector<int>, std::vector<int> > pixel );
    void convY( std::pair<std::vector<int>, std::vector<int> > pixel );
    std::vector<BYTE> __ConPix()const;
    std::vector<int> __Container_Pixel();
private:
    Shape *__shape;
    Convert_Pic *__Convert_Pic;

};

#endif // CONVERT_TO_PIXEL_H
