#include "dogfactory.h"
#include "D:/DesingPattern/01FactoryPattern/FactoryPattern/dog.h"


Animal *DogFactory::CreateAnimal()
{
    return  new Dog();
}
