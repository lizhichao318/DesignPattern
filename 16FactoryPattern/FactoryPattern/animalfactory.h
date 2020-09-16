#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H

class Animal;
class AnimalFactory
{
public:
    virtual ~AnimalFactory(){};
    virtual Animal *  CreateAnimal( ) = 0;
};

#endif // ANIMALFACTORY_H
