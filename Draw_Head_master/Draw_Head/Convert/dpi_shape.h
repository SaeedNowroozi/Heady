#ifndef DPI_SHAPE_H
#define DPI_SHAPE_H

#include <QObject>

class DPI_Shape : public QObject
{
    Q_OBJECT
public:
    explicit DPI_Shape(QObject *parent = nullptr);
    void regular_DPI();
signals:

public slots:
};

#endif // DPI_SHAPE_H
