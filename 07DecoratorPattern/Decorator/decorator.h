#ifndef DECORATOR_H
#define DECORATOR_H
#include "eggcake.h"

//装饰器
class Decorator : public EggCake
{
public:
    Decorator( EggCake * m_cake):EggCake(),cake(m_cake){}
    void showCake() override
    {
        cake->showCake();
    }
    double getPrice() override
    {
        return  cake->getPrice();
    }
    virtual ~Decorator()
    {
        delete  cake;
        cake = nullptr;

    }
protected:
    EggCake * cake;//被装饰的对象
};

#endif // DECORATOR_H
