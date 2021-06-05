#include <QCoreApplication>
#include <QDebug>
#include <QScopedPointer>
#include <test.h>

void mytestt(QScopedPointer<Test> &mypointer)
{
    qInfo() << mypointer;
}

void useit(Test *obj)
{
    if(!obj) return;

    qInfo() << "use" << obj;
}

void dostuff()
{
    QScopedPointer<Test> mytest (new Test());
    //   useit(mytest.data());
    mytestt(mytest);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    dostuff();
    return a.exec();
}
