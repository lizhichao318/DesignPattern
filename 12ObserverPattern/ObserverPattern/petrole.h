#ifndef PETROLE_H
#define PETROLE_H
#include "gamerole.h"

class PetRole : public GameRole
{
public:
    using GameRole::GameRole;
    void followToPiont(int x,int y)
    {
        m_x = x-1;
        m_y = y;
        cout  << m_name << "  ¸úËæÖ÷ÈËµ½:"<<m_x<<","<<m_y<<endl;
    }
};

#endif // PETROLE_H
