#include <QCoreApplication>
#include "painter.h"
#include "invoker.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Painter * painter = new Painter();
    Invoker * invoker = new Invoker();
    invoker->addCommand(1,bind(&Painter::drawLine,painter));
    invoker->addCommand(2,bind(&Painter::drawCircle,painter));
    invoker->addCommand(3,bind(&Painter::drawLine,painter));
    invoker->addCommand(4,bind(&Painter::drawRectangle,painter));
    invoker->removeCommand(3);
    invoker->Notify();

    delete invoker;
    delete  painter;

    return a.exec();
}
