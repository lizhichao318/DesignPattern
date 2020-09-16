#include <QCoreApplication>
#include "dogfactory.h"
#include "catfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //创建工厂
    AnimalFactory * factory = new DogFactory();
    //创建对象
    Animal * dog = factory->CreateAnimal();
    dog->show();

    delete  dog;
    delete  factory;
    //更换工厂
    factory = new CatFactory();
    Animal *cat = factory->CreateAnimal();
    cat->show();

    delete cat;
    delete factory;

    return a.exec();
}
