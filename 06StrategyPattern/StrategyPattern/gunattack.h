#ifndef GUNATTACK_H
#define GUNATTACK_H
#include "attack.h"

class GunAttack : public Attack
{
public:
    using Attack::Attack;
    void AttackMethod() override
    {
        cout << "��ǹ�������˺�+50"<<endl;
    }

};

#endif // GUNATTACK_H
