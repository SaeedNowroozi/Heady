#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<vector<int> > matrix;
    matrix[0][0] = 8;


    return a.exec();
}
