#include "dogfactory.h"
#include "dog.h"


Animal *DogFactory::CreateAnimal()
{
    return  new Dog();
}
