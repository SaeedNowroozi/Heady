#include "form_chart.h"
#include "ui_form_chart.h"

Form_chart::Form_chart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_chart)
{
    ui->setupUi(this);

}

Form_chart::~Form_chart()
{
    delete ui;
}
