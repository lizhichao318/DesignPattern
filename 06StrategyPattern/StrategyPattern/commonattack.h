#ifndef COMMONATTACK_H
#define COMMONATTACK_H
#include "attack.h"

class CommonAttack : public Attack
{
public:
    using Attack::Attack;
    void AttackMethod() override
    {
        cout <<"��ͨ�������˺�+2"<<endl;
    }
};

#endif // COMMONATTACK_H
