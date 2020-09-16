#ifndef GAMEROLE_H
#define GAMEROLE_H
#include <iostream>
#include <string>
using namespace std;

class GameRole
{
public:
    GameRole(const string &name):m_x(0),m_y(0),m_name(name){ }
    GameRole(const string &name,int x,int y):m_x(x),m_y(y),m_name(name){}
    string getName() const {return m_name ;}
    virtual ~GameRole() {};
    void showPosition()
    {
        cout <<m_name <<"  ÏÖÔÚÎ»ÖÃ:"<< m_x << ","<<m_y<<endl;
    }
protected:
    int m_x;
    int m_y;
    string m_name;
};

#endif // GAMEROLE_H
