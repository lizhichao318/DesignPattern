#ifndef CAT_H
#define CAT_H
#include "animal.h"
#include <iostream>
using namespace std;

class Cat : public Animal
{
public:
    Cat(){}
    void show() override
    {
        cout << "ίχ~"<<endl;
    }
    static Animal * getCat()
    {
        return new  Cat();
    }
};

#endif // CAT_H
