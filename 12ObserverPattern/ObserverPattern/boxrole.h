#ifndef BOXROLE_H
#define BOXROLE_H
#include "gamerole.h"

class BoxRole : public GameRole
{
public:
    using GameRole::GameRole;
    void openBox(int x,int y)
    {
        if( abs(m_x - x) + abs( m_y - y) > 2)
        {
            cout<<m_name<<"  ������������"<<endl;
        }
        else
        {
            cout <<m_name <<"  �򿪱���"<<endl;
        }
    }
};

#endif // BOXROLE_H
