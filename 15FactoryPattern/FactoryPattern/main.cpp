#include <QCoreApplication>
#include "animalfactory.h"
#include "animal.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AnimalFactory * factory = new AnimalFactory();

    Animal * dog = factory->CreateAnimal(AnimalFactory::dog);
    Animal * cat = factory->CreateAnimal(AnimalFactory::cat);

    dog->show();
    cat->show();

    delete  dog;
    delete  cat;

    return a.exec();
}
