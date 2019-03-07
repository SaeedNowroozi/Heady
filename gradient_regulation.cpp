//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com

#include "gradient_regulation.h"

Gradient_Regulation::Gradient_Regulation()
{
  __shape = new Shape();
}

void Gradient_Regulation::Sizing(Shape _shape, int heigh, int wight)const
{

}

void Gradient_Regulation::Resolution(Shape _Shape)const
{

}

void Gradient_Regulation::Definition(std::pair<Shape, Shape> Image, int Horizontal, int Vertical,
                                     int _Horizontal_Resolation, int _Vertical_Resolation)
{

}

void Gradient_Regulation::BinaryPatternMethod(Gradient_Regulation::BinaryPattern, int Horizontal, int Vertical,
                                              int _Horizontal_Resolation, int _Vertical_Resolation, int Natural_Print_Direction, int Mounting_Angle, std::pair<Shape, Shape> Image)
{
     _Vertical_Resolation = (int)(1 / 3) * VRU;
     _Horizontal_Resolation = (int)(2 / 3) * HRU;
}

void Gradient_Regulation::Convert_to_Send_Algorithm()
{

}
