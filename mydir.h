/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef DIR_H
#define DIR_H
#include <QGuiApplication>
#include<QWindow>
#include <QStandardPaths>
#include <QDir>


class MyDir
{
public:
    MyDir();
    void save()const;
    void open()const;

private:
    QDir __Dir;
    const QStringList PicPaths = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
    //const QUrl PicUrl = QUrl::fromLocalFile(PicPaths.isEmpty() ? QDir::homePath() : PicPaths.first());

};

#endif // DIR_H
