#ifndef FORM_CHART_H
#define FORM_CHART_H

#include <QWidget>


#include <QMainWindow>
#include <QtWidgets/QWidget>
#include <QtCharts/QChartGlobal>


QT_BEGIN_NAMESPACE
class QComboBox;
class QCheckBox;
class Ui_ThemeWidgetForm;
QT_END_NAMESPACE

QT_CHARTS_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_CHARTS_END_NAMESPACE

typedef QPair<QPointF, QString> Data;
typedef QList<Data> DataList;
typedef QList<DataList> DataTable;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class Form_chart;
}

class Form_chart : public  QMainWindow
{
    Q_OBJECT

public:
    explicit Form_chart(QWidget *parent = nullptr);
    ~Form_chart();
private Q_SLOTS:
    void updateUI();
private:
    DataTable generateRandomData(int listCount, int valueMax, int valueCount) const;
    void populateThemeBox();
    void populateAnimationBox();
    void populateLegendBox();
    void connectSignals();
    QChart *createScatterChart() const;
private:
    int m_listCount;
    int m_valueMax;
    int m_valueCount;
    // QSqlDatabase m_db;
    QList<QChartView *> m_charts;
    DataTable m_dataTable;
    Ui::Form_chart *ui;
};

#endif // FORM_CHART_H
