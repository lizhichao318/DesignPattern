#ifndef HEROROLE_H
#define HEROROLE_H
#include "gamerole.h"
#include <math.h>
#include <eventhandler.h>
#include <functional>

class HeroRole : public GameRole
{
public:
    using GameRole::GameRole;
    void moveToPoint(int x,int y)
    {
       m_x = x;
       m_y = y;
       cout << m_name <<"  ÒÆ¶¯µ½:"<<m_x<<","<<m_y<<endl;
       moveEvent(m_x,m_y);
    }

    typedef function<void(int,int)> Func;
    EventHandler<Func> moveEvent;
};

#endif // HEROROLE_H
