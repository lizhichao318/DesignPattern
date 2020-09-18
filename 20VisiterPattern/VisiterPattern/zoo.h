#ifndef ZOO_H
#define ZOO_H
#include "animal.h"
#include "visitor.h"
#include <list>
#include <memory>
using namespace std;

class Zoo
{
public:
    Zoo(){};
    void addAnimal(shared_ptr<Animal> animal)
    {
        animals.push_back(animal);
    }
    void RemoveAnimal(shared_ptr<Animal> animal)
    {
        animals.remove(animal);
    }
    void accept(Visitor * visitor)
    {
        for(auto &animal:animals  )
        {
            animal->accept(visitor);
        }
    }

private:
    list<shared_ptr<Animal>> animals;
};

#endif // ZOO_H
