#ifndef EGGCAKEADDBACON_H
#define EGGCAKEADDBACON_H
#include "decorator.h"

class EggCakeAddBacon : public Decorator
{
public:
    using Decorator::Decorator;
    void showCake() override
    {
        cake->showCake();
        cout<<"�����һ�����..."<<endl;
    }
    double getPrice() override
    {
        return cake->getPrice()+1.5;
    }
    ~EggCakeAddBacon()
    {

    }
};

#endif // EGGCAKEADDBACON_H
