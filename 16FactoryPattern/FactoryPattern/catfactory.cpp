#include "catfactory.h"
#include "cat.h"


Animal *CatFactory::CreateAnimal()
{
    return  new Cat();
}
