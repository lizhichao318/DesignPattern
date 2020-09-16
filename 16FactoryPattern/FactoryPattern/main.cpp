#include <QCoreApplication>
#include "dogfactory.h"
#include "catfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //��������
    AnimalFactory * factory = new DogFactory();
    //��������
    Animal * dog = factory->CreateAnimal();
    dog->show();

    delete  dog;
    delete  factory;
    //��������
    factory = new CatFactory();
    Animal *cat = factory->CreateAnimal();
    cat->show();

    delete cat;
    delete factory;

    return a.exec();
}
