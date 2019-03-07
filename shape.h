#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui>
#include <QtCore>
#include <QWidget>

#include <ostream>
#include <istream>

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
    private:

};

#endif // SHAPE_H
