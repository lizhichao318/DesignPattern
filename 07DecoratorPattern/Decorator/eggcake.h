#ifndef EGGCAKE_H
#define EGGCAKE_H
#include <iostream>
using namespace std;
//�����������ӿ�
class EggCake
{
public:
    virtual ~EggCake(){ }
    virtual double getPrice()= 0;
    virtual void showCake() = 0;
};

#endif // EGGCAKE_H
