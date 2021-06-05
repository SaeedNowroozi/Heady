#include "test.h"
#include <QDebug>
#include <QPointer>

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo()<<"dddd" << this;
}

Test::~Test()
{
    qInfo()<<"destrictor" << this;
}

