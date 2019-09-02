/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "mydir.h"
#include <QString>
#include <QDebug>

MyDir::MyDir()
{
    QString mypath("C:/Users/saaed/Desktop/qqqq");
    //  __Dir(mypath);
    if(!__Dir.exists(mypath))
    {
        __Dir.mkpath(mypath);
        qDebug() <<"create!";
    }
    else {
        qDebug() <<"exit!";
    }

}

void MyDir::save() const
{


}

void MyDir::open() const
{
    QDir::home();
    // QDir::exists();
    //  QDir::filePath("c:\ ");
}
