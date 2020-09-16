#ifndef DECORATOR_H
#define DECORATOR_H
#include "eggcake.h"

//װ����
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
    EggCake * cake;//��װ�εĶ���
};

#endif // DECORATOR_H
