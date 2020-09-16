#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H
#include "dog.h"
#include "cat.h"
#include <functional>
#include <map>
using namespace std;

class AnimalFactory
{
public:
    enum AnimalType{dog,cat};
    typedef function<Animal*()> Func;
    AnimalFactory()
    {
        //²úÆ·×¢²á
        AnimalRegistry[dog] = Dog::getDog;
        AnimalRegistry[cat] = Cat::getCat;
    }
    Animal * CreateAnimal(AnimalType type)
    {
        return AnimalRegistry[type]();
    }
private:
    map<AnimalType,Func> AnimalRegistry;
};

#endif // ANIMALFACTORY_H
