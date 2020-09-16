#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H
#include "animal.h"

class AnimalFactory
{
public:
    virtual ~AnimalFactory(){};
    virtual Animal *  CreateAnimal( ) = 0;
};

#endif // ANIMALFACTORY_H
