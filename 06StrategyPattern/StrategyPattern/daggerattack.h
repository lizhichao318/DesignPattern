#ifndef DAGGERATTACK_H
#define DAGGERATTACK_H
#include "attack.h"

class DaggerAttack : public Attack
{
public:
    using Attack::Attack;
    void AttackMethod() override
    {
        cout <<"Ø°Ê×¹¥»÷£¬ÉËº¦+10"<<endl;
    }
};

#endif // DAGGERATTACK_H
