#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H
#include "animalfactorytemplate.h"
template<typename A,typename T >
class AnimalFactory:public AnimalFactoryTemplate<A>
{
public:

   A * CreateAnimal()
   {
       return new T();
   }
};

#endif // ANIMALFACTORY_H
