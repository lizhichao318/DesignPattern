#include <QCoreApplication>
#include "facade.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Facade facade;
    facade.MethodA();
    facade.MethodB();

    return a.exec();
}
