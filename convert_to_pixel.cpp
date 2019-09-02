/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#include "convert_to_pixel.h"

Convert_to_Pixel::Convert_to_Pixel()
{
   __shape = new Shape();
   __Convert_Pic = new Convert_Pic();
}
//search Y
void Convert_to_Pixel::convX(std::pair<std::vector<int>, std::vector<int> > pixel)
{
    int postin;
//   for(auto _search_y = pixel; _search_y <= pixel.second.cend(); ++ _search_y)
//   {
//     postion = __shape->postion();
//     postion = __Convert_Pic->postion();
//   }

}

void Convert_to_Pixel::convY(std::pair<std::vector<int>, std::vector<int> > pixel)
{
    int postion;
    Q_UNUSED(postion)
//   for(auto _search_x = pixel; _search_x <= pixel.first.cend(); ++ _search_x)
//   {
//       postion = __shape->postion();
//       postion = __Convert_Pic->postion();
//   }
}

std::vector<BYTE> Convert_to_Pixel::__ConPix() const
{
    std::vector<BYTE>::iterator __iteCon;
    Q_UNUSED(__iteCon)
    std::vector<BYTE> a;
    return a;
}

std::vector<int> Convert_to_Pixel::__Container_Pixel()
{
      std::vector<int>::iterator __iteContainer;
      std::vector<int> a;
      return a;
}
