#ifndef PLAER_H
#define PLAER_H

#include "commonattack.h"
#include <memory>

class Plaer
{
public:
    Plaer(const string &m_name,shared_ptr<Attack> m_attack = make_shared<CommonAttack>()):name(m_name),attack(m_attack){}
    void showAttack()
    {
        attack->AttackMethod();
    }
    void setAttack(shared_ptr<Attack> m_attack)
    {
        attack = m_attack;
    }
private:
    string name;
    shared_ptr<Attack> attack;

};

#endif // PLAER_H
