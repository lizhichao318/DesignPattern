#ifndef CLONEPATTERN_H
#define CLONEPATTERN_H
#include <string>
#include <iostream>
using namespace std;

class ClonePattern
{
public:
    ClonePattern(string m_name):name(m_name){}
    ClonePattern(const ClonePattern & obj)
    {
        name = obj.name;
    }
    virtual void show()
    {
        cout <<"My name is "<<name<<endl;
    }
    virtual ClonePattern * clone() = 0;//¿ËÂ¡·½·¨
    virtual ~ClonePattern(){}
private:
    string name;
};

#endif // CLONEPATTERN_H
