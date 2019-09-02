///*
//Writen by Saeed Nowroozi
//saeednowroozi69@gmail.com
//university of Tabriz, embaded system lab 2017 - 2019
//*/
//#ifndef CHART_H
//#define CHART_H

//#include <QtSql/QSql>
//#include <QSqlDatabase>


//#include"Mis/timer.h"
//#include"Convert/convert_pic.h"
//#include"Convert/smart_algorithm.h"

//#include <QMainWindow>
//#include <QtWidgets/QWidget>
//#include <QtCharts/QChartGlobal>


//QT_BEGIN_NAMESPACE
//class QComboBox;
//class QCheckBox;
//class Ui_ThemeWidgetForm;
//QT_END_NAMESPACE

//QT_CHARTS_BEGIN_NAMESPACE
//class QChartView;
//class QChart;
//QT_CHARTS_END_NAMESPACE

//typedef QPair<QPointF, QString> Data;
//typedef QList<Data> DataList;
//typedef QList<DataList> DataTable;

//QT_CHARTS_USE_NAMESPACE

//namespace Ui {
//class MainWindow;
//}

//class Chart : public QMainWindow
//{
//    Q_OBJECT

//public:

//   explicit Chart(QWidget *parent = nullptr);
//    ~Chart();
//private Q_SLOTS:
//    void updateUI();
//private:
//    DataTable generateRandomData(int listCount, int valueMax, int valueCount) const;
//    void populateThemeBox();
//    void populateAnimationBox();
//    void populateLegendBox();
//    void connectSignals();
//    QChart *createScatterChart() const;
//private:
//    int m_listCount;
//    int m_valueMax;
//    int m_valueCount;
//     QSqlDatabase m_db;
//    QList<QChartView *> m_charts;
//    DataTable m_dataTable;

//    Ui::MainWindow *ui;
//};

//#endif // MAINWINDOW_H
