#ifndef EGGCAKEADDSAUSAGE_H
#define EGGCAKEADDSAUSAGE_H
#include "decorator.h"

class EggCakeAddSausage : public Decorator
{
public:
    using Decorator::Decorator;
    void showCake() override
    {
        cake->showCake();
        cout <<"�����һ���㳦..."<<endl;
    }
    double getPrice() override
    {
        return  cake->getPrice()+1.0;
    }
    ~EggCakeAddSausage()
    {

    }
};

#endif // EGGCAKEADDSAUSAGE_H
