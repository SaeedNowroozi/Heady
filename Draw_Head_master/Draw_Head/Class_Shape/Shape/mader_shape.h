#ifndef MADER_SHAPE_H
#define MADER_SHAPE_H
#include<vector>

class Mader_Shape
{
public:
    Mader_Shape();
    int width( int );
    int Rect( int, int, int, int );
    void fill();
    int Line( int, int );
    int circle( int, int, int);
    int crve(int , int, int);

};

#endif // MADER_SHAPE_H
