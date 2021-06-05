#include "form_chart.h"
#include "ui_form_chart.h"

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QAbstractBarSeries>
#include <QtCharts/QPercentBarSeries>
#include <QtCharts/QStackedBarSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QAreaSeries>
#include <QtCharts/QLegend>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtCore/QRandomGenerator>
#include <QtCharts/QBarCategoryAxis>
#include <QtWidgets/QApplication>
#include <QtCharts/QValueAxis>
#include <QtCore/QTime>
#include <QtCharts/QBarCategoryAxis>

Form_chart::Form_chart(QWidget *parent) :
    QMainWindow(parent),
    m_listCount(3),
    m_valueMax(10),
    m_valueCount(7),
    m_dataTable(generateRandomData(m_listCount, m_valueMax, m_valueCount)),
    ui(new Ui::Form_chart)
{

    ui->setupUi(this);
    // ui->setupUi(this);
    populateThemeBox();
    populateAnimationBox();
    populateLegendBox();

    QChartView *chartView;

    //    chartView = new QChartView(createAreaChart());
    //    ui->gridLayout->addWidget(chartView, 1, 0);
    //    m_charts << chartView;
    chartView = new QChartView(createScatterChart());
    ui->gridLayout->addWidget(chartView, 2, 2);
    m_charts << chartView;
    // Set defaults
    ui->antialiasCheckBox->setChecked(true);

    // Set the colors from the light theme as default ones
    QPalette pal = qApp->palette();
    pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    qApp->setPalette(pal);

    updateUI();

}

Form_chart::~Form_chart()
{
    delete ui;
}

DataTable Form_chart::generateRandomData(int listCount, int valueMax, int valueCount) const
{
    DataTable dataTable;

    // generate random data
    for (int i(0); i < listCount; i++) {
        DataList dataList;
        qreal yValue(0);
        for (int j(0); j < valueCount; j++) {
            yValue = yValue + QRandomGenerator::global()->bounded(valueMax / (qreal) valueCount);
            QPointF value((j + QRandomGenerator::global()->generateDouble()) * ((qreal) m_valueMax / (qreal) valueCount),
                          yValue);
            QString label = "Slice " + QString::number(i) + ":" + QString::number(j);
            dataList << Data(value, label);
        }
        dataTable << dataList;
    }

    return dataTable;
}



void Form_chart::updateUI()
{
    //![6]
    QChart::ChartTheme theme = static_cast<QChart::ChartTheme>(
                ui->themeComboBox->itemData(ui->themeComboBox->currentIndex()).toInt());
    //![6]
    const auto charts = m_charts;
    if (!m_charts.isEmpty() && m_charts.at(0)->chart()->theme() != theme) {
        for (QChartView *chartView : charts) {
            //![7]
            chartView->chart()->setTheme(theme);
            //![7]
        }

        // Set palette colors based on selected theme
        //![8]
        QPalette pal = window()->palette();
        if (theme == QChart::ChartThemeLight) {
            pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
            //![8]
        } else if (theme == QChart::ChartThemeDark) {
            pal.setColor(QPalette::Window, QRgb(0x121218));
            pal.setColor(QPalette::WindowText, QRgb(0xd6d6d6));
        } else if (theme == QChart::ChartThemeBlueCerulean) {
            pal.setColor(QPalette::Window, QRgb(0x40434a));
            pal.setColor(QPalette::WindowText, QRgb(0xd6d6d6));
        } else if (theme == QChart::ChartThemeBrownSand) {
            pal.setColor(QPalette::Window, QRgb(0x9e8965));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else if (theme == QChart::ChartThemeBlueNcs) {
            pal.setColor(QPalette::Window, QRgb(0x018bba));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else if (theme == QChart::ChartThemeHighContrast) {
            pal.setColor(QPalette::Window, QRgb(0xffab03));
            pal.setColor(QPalette::WindowText, QRgb(0x181818));
        } else if (theme == QChart::ChartThemeBlueIcy) {
            pal.setColor(QPalette::Window, QRgb(0xcee7f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        } else {
            pal.setColor(QPalette::Window, QRgb(0xf0f0f0));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));
        }
        window()->setPalette(pal);
    }
    // Update antialiasing
    //![11]
    bool checked = ui->antialiasCheckBox->isChecked();
    for (QChartView *chart : charts)
        chart->setRenderHint(QPainter::Antialiasing, checked);
    //![11]

    // Update animation options
    //![9]
    QChart::AnimationOptions options(
                ui->animatedComboBox->itemData(ui->animatedComboBox->currentIndex()).toInt());
    if (!m_charts.isEmpty() && m_charts.at(0)->chart()->animationOptions() != options) {
        for (QChartView *chartView : charts)
            chartView->chart()->setAnimationOptions(options);
    }
    //![9]

    // Update legend alignment
    //![10]
    Qt::Alignment alignment(
                ui->legendComboBox->itemData(ui->legendComboBox->currentIndex()).toInt());

    if (!alignment) {
        for (QChartView *chartView : charts)
            chartView->chart()->legend()->hide();
    } else {
        for (QChartView *chartView : charts) {
            chartView->chart()->legend()->setAlignment(alignment);
            chartView->chart()->legend()->show();
        }
    }
    //![10]
}

void Form_chart::populateThemeBox()
{
    // add items to theme combobox
    ui->themeComboBox->addItem("Light", QChart::ChartThemeLight);
    ui->themeComboBox->addItem("Blue Cerulean", QChart::ChartThemeBlueCerulean);
    ui->themeComboBox->addItem("Dark", QChart::ChartThemeDark);
    ui->themeComboBox->addItem("Brown Sand", QChart::ChartThemeBrownSand);
    ui->themeComboBox->addItem("Blue NCS", QChart::ChartThemeBlueNcs);
    ui->themeComboBox->addItem("High Contrast", QChart::ChartThemeHighContrast);
    ui->themeComboBox->addItem("Blue Icy", QChart::ChartThemeBlueIcy);
    ui->themeComboBox->addItem("Qt", QChart::ChartThemeQt);
}

void Form_chart::populateAnimationBox()
{
    ui->animatedComboBox->addItem("No Animations", QChart::NoAnimation);
    ui->animatedComboBox->addItem("GridAxis Animations", QChart::GridAxisAnimations);
    ui->animatedComboBox->addItem("Series Animations", QChart::SeriesAnimations);
    ui->animatedComboBox->addItem("All Animations", QChart::AllAnimations);
}

void Form_chart::populateLegendBox()
{
    // add items to legend combobox
    ui->legendComboBox->addItem("No Legend ", 0);
    ui->legendComboBox->addItem("Legend Top", Qt::AlignTop);
    ui->legendComboBox->addItem("Legend Bottom", Qt::AlignBottom);
    ui->legendComboBox->addItem("Legend Left", Qt::AlignLeft);
    ui->legendComboBox->addItem("Legend Right", Qt::AlignRight);
}

void Form_chart::connectSignals()
{

}

QChart *Form_chart::createScatterChart() const
{
    // scatter chart
    QChart *chart = new QChart();
    chart->setTitle("Scatter chart");
    QString name("Series ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QScatterSeries *series = new QScatterSeries(chart);
        for (const Data &data : list)
            series->append(data.first);
        series->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(series);
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");
    return chart;
}

