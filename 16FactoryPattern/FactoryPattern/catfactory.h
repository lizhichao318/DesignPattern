#ifndef CATFACTORY_H
#define CATFACTORY_H
#include "animalfactory.h"

class CatFactory:public AnimalFactory
{
public:
    Animal * CreateAnimal() ;

};

#endif // CATFACTORY_H
