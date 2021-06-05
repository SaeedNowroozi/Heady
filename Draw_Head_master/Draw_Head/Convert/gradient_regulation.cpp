/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embadded system lab 2017 - 2019
*/

#include "gradient_regulation.h"

Gradient_Regulation::Gradient_Regulation()
{
    //__shape = new Shape();
}

void Gradient_Regulation::Definition(std::pair<Pool_Shapes, Pool_Shapes> Image, int Horizontal, int Vertical,
                                     int _Horizontal_Resolation, int _Vertical_Resolation)
{
    Q_UNUSED(_Horizontal_Resolation)
    Q_UNUSED(_Vertical_Resolation)
    Q_UNUSED(Vertical)
    Q_UNUSED(Horizontal)
    Q_UNUSED(Image)
}

void Gradient_Regulation::BinaryPatternMethod(Gradient_Regulation::BinaryPattern __bp, int Horizontal, int Vertical,
                                              int _Horizontal_Resolation, int _Vertical_Resolation, int Natural_Print_Direction,
                                              int Mounting_Angle, std::pair<Pool_Shapes, Pool_Shapes> Image)
{
    _Vertical_Resolation = static_cast<int>((1 / 3) * VRU);
    _Horizontal_Resolation = static_cast<int>((2 / 3) * HRU);
    Q_UNUSED(Vertical)
    Q_UNUSED(Natural_Print_Direction)
    Q_UNUSED(Horizontal)
    Q_UNUSED(Image)
    Q_UNUSED(__bp)
    Q_UNUSED(Mounting_Angle)
}

void Gradient_Regulation::Convert_to_Send_Algorithm()
{

}
