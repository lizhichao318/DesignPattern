#ifndef DOGFACTORY_H
#define DOGFACTORY_H
#include "animalfactory.h"

class DogFactory : public AnimalFactory
{
public:
    Animal * CreateAnimal() ;
};

#endif // DOGFACTORY_H
