#include <QCoreApplication>
#include "clonepatternexample.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ClonePattern * clone = new ClonePatternExample("123");
    clone->show();
    ClonePattern * clone1 = clone->clone();
    clone1->show();

    delete clone;
    delete clone1;


    return a.exec();
}
