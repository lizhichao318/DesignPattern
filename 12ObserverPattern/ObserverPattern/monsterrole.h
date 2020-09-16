#ifndef MONSTERROLE_H
#define MONSTERROLE_H
#include "gamerole.h"
#include <math.h>


class MonsterRole : public GameRole
{
public:
    using GameRole::GameRole;
    void attactTheHero(int x,int y)
    {
        if( abs(m_x - x) + abs( m_y - y) > 3)
        {
            cout <<m_name<< "  ����̫Զ,������"<<endl;
        }
        else
            cout <<m_name<<"  ��ʼս��"<<endl;
    }
};

#endif // MONSTERROLE_H
