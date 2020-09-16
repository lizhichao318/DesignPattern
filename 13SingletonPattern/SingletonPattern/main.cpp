#include <QCoreApplication>
#include "exampleclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass & singletonObj = ExampleClass::getSingleObj();
    singletonObj.show();


    return a.exec();
}
