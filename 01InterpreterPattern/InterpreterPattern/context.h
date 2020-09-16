#ifndef CONTEXT_H
#define CONTEXT_H
#include "variable.h"
#include <map>
using namespace std;

class Context
{
public:
    void registerVariable(string var,double value)
    {
        m_map.insert(make_pair(var,value));
    }
    double lookUpValue(string var )
    {
        auto iter = m_map.find(var);
        if( iter != m_map.end() )
        {
            return  iter->second;
        }
        return  0;
    }
    bool findVariable(string var)
    {
        auto iter = m_map.find(var);
        if( iter != m_map.end() )
        {
            return  true;
        }
        return  false;
    }
private:
    map<string ,double> m_map;
};

#endif // CONTEXT_H
