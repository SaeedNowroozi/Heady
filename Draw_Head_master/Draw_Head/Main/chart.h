/*
//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com
//university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef CHART_H
#define CHART_H

#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QMainWindow>

//#include"Mis/timer.h"
//#include"Convert/convert_pic.h"
//#include"Convert/smart_algorithm.h"
//#include <QObject>

//namespace Ui {
//class MainWindow;
//}

class Chart:public QMainWindow
{
 //  Q_OBJECT

public:

   explicit Chart(QWidget *parent = nullptr);
    ~Chart();


private:


   // Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
