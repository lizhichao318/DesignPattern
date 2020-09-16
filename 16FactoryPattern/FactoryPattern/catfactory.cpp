#include "catfactory.h"
#include "D:/DesingPattern/01FactoryPattern/FactoryPattern/cat.h"


Animal *CatFactory::CreateAnimal()
{
    return  new Cat();
}
