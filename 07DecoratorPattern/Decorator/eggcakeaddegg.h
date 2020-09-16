#ifndef EGGCAKEADDEGG_H
#define EGGCAKEADDEGG_H
#include "decorator.h"

class EggCakeAddEgg : public Decorator
{
public:
    using Decorator::Decorator;
    void showCake() override
    {
        cake->showCake();
        cout<<"额外加一个鸡蛋..."<<endl;
    }
    double getPrice() override
    {
        return cake->getPrice()+1.0;
    }
    ~EggCakeAddEgg()
    {

    }
};

#endif // EGGCAKEADDEGG_H
