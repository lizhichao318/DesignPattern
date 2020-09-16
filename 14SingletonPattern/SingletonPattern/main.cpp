#include <QCoreApplication>
#include <iostream>
#include "anyletonexample.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    AnyletonExample * obj1 = AnyletonExample::getAnyletonObj();
    cout <<  AnyletonExample::getCurObjCount() << endl;

    AnyletonExample * obj2 = AnyletonExample::getAnyletonObj();
    cout <<  AnyletonExample::getCurObjCount() << endl;

    AnyletonExample * obj3 = AnyletonExample::getAnyletonObj();
    cout <<  AnyletonExample::getCurObjCount() << endl;

    delete  obj3;
    cout <<  AnyletonExample::getCurObjCount() << endl;


    return a.exec();
}
