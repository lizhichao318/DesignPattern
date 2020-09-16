#ifndef ATTACK_H
#define ATTACK_H
#include <iostream>
using namespace std;

class Attack
{
public:
    virtual void AttackMethod() = 0;
    ~Attack(){} ;
};

#endif // ATTACK_H
