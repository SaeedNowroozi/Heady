#ifndef GRADIENT_REGULATION_H
#define GRADIENT_REGULATION_H

#include "Shape/shape.h"
#include "Convert/convert_to_pixel.h"
#include <map>

#define DPI 300
#define HRU 1/360
#define VRU 1/360

class Gradient_Regulation
{
public:
    enum BinaryPattern
    {
        Diffusion_dither,
        Pattern_dither,
        Halftone_Screen
    };
    Gradient_Regulation();
    //Ground is 9 * 9 cm2
    void Sizing( Shape _shape, int heigh, int wight )const;
    void Resolution( Shape _Shape )const;
    void Definition( std::pair<Shape, Shape>Image, int Horizontal, int Vertical, int _Horizontal_Resolation,
                     int _Vertical_Resolation );
    void BinaryPatternMethod(BinaryPattern, int Horizontal, int Vertical, int _Horizontal_Resolation,
                             int _Vertical_Resolation, int Natural_Print_Direction, int Mounting_Angle,
                             std::pair<Shape, Shape>Image);
    void Convert_to_Send_Algorithm();
private:

    Shape *__shape;
};

#endif // GRADIENT_REGULATION_H
