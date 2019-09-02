/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui>
#include <QtCore>
#include <QWidget>
#include <QDialog>
#include <ostream>
#include <istream>
#include <vector>
#include <QtCore>
#include <QtGui>
using namespace std;

class Shape: public QWidget
{
    friend std::ostream &operator <<(std::ostream &, const Shape &);
    friend std::istream &operator >>(std::istream &, Shape &);
public:
    Shape();
    bool operator !()const;
    bool operator !=(const Shape &__Shape)const;
    bool operator ==(const Shape &)const;
    const Shape & operator =(const Shape &);
    // void paintEvent(QPaintEvent *e);
    void paintEven();
    void Rectangle();
    void Ellipse();
    void Polygun();
    void Fill( bool );
    //position
    int postion();
    //last pixle
    bool end_shape()const;
    //Index Shape
    //  virtual int Index_Shape()const =0;
    //  virtual void Shape_create()const =0;
    // count for shape
    static int counter;
    //    //continer for shape
    static vector<int> count;
protected:
//void paintEvent(QPaintEvent *e);
private:

};

#endif // SHAPE_H
