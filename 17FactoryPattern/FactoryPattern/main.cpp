#include <QCoreApplication>
#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "animalfactory.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AnimalFactory<Animal,Dog> dogfactory;
    Animal * dog = dogfactory.CreateAnimal();
    dog->show();

    AnimalFactory<Animal,Cat> catfactory;
    Animal * cat = catfactory.CreateAnimal();
    cat->show();

    delete dog;
    delete cat;
    return a.exec();
}
