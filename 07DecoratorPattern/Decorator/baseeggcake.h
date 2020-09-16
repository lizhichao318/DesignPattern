#ifndef BASEEGGCAKE_H
#define BASEEGGCAKE_H
#include "eggcake.h"

//基础款
class BaseEggCake : public EggCake
{
public:
    BaseEggCake(double m_price = 3.0):EggCake(),price(m_price){}
    void showCake() override
    {
        cout <<"基础款鸡蛋灌饼..."<<endl;
    }
    double getPrice() override
    {
        return  price;
    }

private:
    double price;

};

#endif // BASEEGGCAKE_H
