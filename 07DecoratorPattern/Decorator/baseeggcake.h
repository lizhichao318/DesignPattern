#ifndef BASEEGGCAKE_H
#define BASEEGGCAKE_H
#include "eggcake.h"

//������
class BaseEggCake : public EggCake
{
public:
    BaseEggCake(double m_price = 3.0):EggCake(),price(m_price){}
    void showCake() override
    {
        cout <<"����������..."<<endl;
    }
    double getPrice() override
    {
        return  price;
    }

private:
    double price;

};

#endif // BASEEGGCAKE_H
