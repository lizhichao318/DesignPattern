#include <QCoreApplication>
#include "computer.h"
#include "computerbuilderone.h"
#include "computerbuilderdirector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    shared_ptr<ComputerBuilder> builder(new ComputerBuilderOne());
    ComputerBuilderDirector * director = new  ComputerBuilderDirector(builder);
    Computer * myComputer = director->constructComputer();
    myComputer->showCopmtuter();

    delete myComputer;
    delete director;

    return a.exec();
}
