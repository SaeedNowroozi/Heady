/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QPainter>
#include <QtGui>
#include <QtCore>

#include "Shape\shape.h"
#include "Convert\convert_to_pixel.h"

#include <QToolButton>

namespace Ui {
class MainWindow;
}
//  static int coun ;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    std::pair<std::vector<int>,std::vector<int>> pixel;
    std::pair<std::vector<int>,std::vector<int>> pixel1;
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *e)override;
    void closeEvent(QCloseEvent *e)override;
    void mousePressEvent(QMouseEvent *e) override;
private slots:
    void phsyer();
    void usb_fpga();
    void __timer();
    void act_acctial();

private:
    Ui::MainWindow *ui;
    //QPainter *Paint;
 //   Shape * __shape;
    Convert_to_Pixel *__CTP;
    std::vector<int> fir,sec;
    int x1[2];
    int y1[2];
    int coun = 0;
    QAction *act_exit;
    QAction *act_phsyer;
    QAction *act_acctial_range;
    QAction *act_timer;
    QAction *act_usb_fpga;
    QToolBar *app_main_ToolBar;
    void createAction();
    void createBar();
    void createConnections();
    void createDock();
QToolButton *funcCircle_ToolButton;
QToolButton *func_Fill_Circle_ToolButton;
QToolButton *func_Fill_Polygun_ToolButton;
QToolButton *func_Polygun_ToolButton;
QToolButton *func_curive_ToolButton;
QToolButton *func_rect_ToolButton;
QToolButton *func_Fill_rect_ToolButton;
QToolButton * func_line_ToolButton;
};

#endif // MAINWINDOW_H
