#ifndef DOG_H
#define DOG_H
#include "animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal
{
public:
    Dog(){};
    void show() override
    {
       cout << "ÍôÍô~"<<endl;
    }
    static Animal * getDog()
    {
        return new Dog();
    }
};

#endif // DOG_H
