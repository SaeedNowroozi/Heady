/*
Writen by Saeed Nowroozi
saeednowroozi69@gmail.com
university of Tabriz, embaded system lab 2017 - 2019
*/

#include "mainwindow.h"
#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Shape\shape.h"
//#include <QToolButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Paint->drawLine(10,10,25,25);
    //__shape = new Shape();
    __CTP = new Convert_to_Pixel();
    //  coun = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter panter(this);
    QPen paintpen(Qt::black);
    paintpen.setWidth(1);

    QPen paintpen2(Qt::red);
    paintpen2.setWidth(1);
    // __shape->paintEven();
    for(int i = 20; i<= 1000; i+=10)
    {
        QPoint p1;
        p1.setX(i);
        p1.setY(20);

        QPoint p2;
        p2.setX(i);
        p2.setY(500);
        pixel.first.push_back(i);
        pixel.second.push_back(500);
        __CTP->convX(pixel);

        panter.setPen(paintpen2);
        panter.drawLine(p1,p2);
    }
    for(int j = 20; j<= 500; j+=10)
    {
        QPoint p1;
        p1.setX(20);
        p1.setY(j);

        QPoint p2;
        p2.setX(1000);
        p2.setY(j);
        pixel1.first.push_back(1000);
        pixel1.second.push_back(j);
        __CTP->convY(pixel1);
        panter.setPen(paintpen);
        panter.drawLine(p1,p2);
    }
    //  panter.drawLine(10, 10, 100, 100);
    //   panter.setPen(paintpen);
    //   panter.drawPoint(p1);
    //   panter.drawPoint(p2);
    //__shape->paintEven();

    //    QPen paintpen3(Qt::red);
    //    paintpen3.setWidth(3);
    //    panter.setPen(paintpen3);
    if(x1[0] != 0 || y1[1] !=0)
        panter.drawRect(x1[0],y1[0], x1[1],y1[1]);

}

void MainWindow::closeEvent(QCloseEvent *e)
{

}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    x1[coun] = e->x();
    y1[coun] = e->y();
    coun ++;
}

void MainWindow::phsyer()
{

}

void MainWindow::usb_fpga()
{

}

void MainWindow::__timer()
{

}

void MainWindow::act_acctial()
{

}

void MainWindow::createAction()
{
    act_exit = new QAction(QIcon(""),tr("Exit"), this);
    act_exit->setShortcut(QKeySequence("Ctrl+Q"));
    act_phsyer = new QAction(QIcon(""),tr("act_phsyer"), this);
    act_acctial_range = new QAction(QIcon(""),tr("act_actial_range"), this);
    act_timer = new QAction(QIcon(""),tr("act_timer"), this);
    act_usb_fpga =  new QAction(QIcon(""),tr("usb_fpga"), this);
}
void MainWindow::createBar(){
    app_main_ToolBar = new QToolBar(tr("Application"), this);
    app_main_ToolBar->setObjectName("TB_Applicaton");
    app_main_ToolBar->setAllowedAreas(Qt::TopToolBarArea | Qt::BottomToolBarArea);
    app_main_ToolBar->addAction(act_exit);
    app_main_ToolBar->addAction(act_phsyer);
    app_main_ToolBar->addAction(act_acctial_range);
    app_main_ToolBar->addAction(act_timer);
    app_main_ToolBar->addAction(act_usb_fpga);
    this->addToolBar(Qt::TopToolBarArea, app_main_ToolBar);
}

void MainWindow::createConnections()
{
    connect(act_exit, SIGNAL(triggerd()), this, SLOT(close()));
    connect(act_phsyer, SIGNAL(triggered()), this, SLOT(phsyer()));
    connect(act_acctial_range, SIGNAL(triggered()), this, SLOT(act_acctial()));
    connect(act_timer, SIGNAL(triggered()), this, SLOT(__timer()));
    connect(act_usb_fpga, SIGNAL(triggered()), this, SLOT(usb_fpga()));

}

void MainWindow::createDock()
{
    QWidget *dock = new QWidget;
    funcCircle_ToolButton = new QToolButton;
    funcCircle_ToolButton->setText(QString());
    funcCircle_ToolButton->setIcon(QIcon(""));
    funcCircle_ToolButton->setShortcut(QKeySequence("Ctrl+A"));
    funcCircle_ToolButton->setToolTip(tr("Draw Circle"));
    func_Fill_Circle_ToolButton = new QToolButton;
    func_Fill_Circle_ToolButton->setText(QString());
    func_Fill_Circle_ToolButton->setIcon(QIcon(""));
    func_Fill_Circle_ToolButton->setToolTip(tr("Draw Fill Circle"));
    //line
    func_line_ToolButton = new QToolButton;
    func_line_ToolButton->setText(QString());
    func_line_ToolButton->setIcon(QIcon(""));
    func_line_ToolButton->setToolTip(tr("Draw Fill Circle"));
    //rect
    func_Fill_rect_ToolButton = new QToolButton;
    func_Fill_rect_ToolButton->setText(QString());
    func_Fill_rect_ToolButton->setIcon(QIcon(""));
    func_Fill_rect_ToolButton->setToolTip(tr("Draw Fill Circle"));
    func_rect_ToolButton = new QToolButton;
    func_rect_ToolButton->setText(QString());
    func_rect_ToolButton->setIcon(QIcon(""));
    func_rect_ToolButton->setToolTip(tr("Draw Fill Circle"));
    //curive
    func_curive_ToolButton = new QToolButton;
    func_curive_ToolButton->setText(QString());
    func_curive_ToolButton->setIcon(QIcon(""));
    func_curive_ToolButton->setToolTip(tr("Draw Fill Circle"));
    //polygun
    func_Polygun_ToolButton = new QToolButton;
    func_Polygun_ToolButton->setText(QString());
    func_Polygun_ToolButton->setIcon(QIcon(""));
    func_Polygun_ToolButton->setToolTip(tr("Draw Fill Circle"));
    func_Fill_Polygun_ToolButton = new QToolButton;
    func_Fill_Polygun_ToolButton->setText(QString());
    func_Fill_Polygun_ToolButton->setIcon(QIcon(""));
    func_Fill_Polygun_ToolButton->setToolTip(tr("Draw Fill Circle"));

}
