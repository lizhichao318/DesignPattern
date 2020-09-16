#ifndef CLONEPATTERNEXAMPLE_H
#define CLONEPATTERNEXAMPLE_H
#include "clonepattern.h"

class ClonePatternExample:public ClonePattern
{
public:
    ClonePatternExample(string m_name):ClonePattern(m_name){}
    ClonePatternExample(const ClonePatternExample &obj):ClonePattern(obj){}
    //¿ËÂ¡·½·¨
    ClonePatternExample * clone()
    {
        return  new ClonePatternExample(*this);
    }
};

#endif // CLONEPATTERNEXAMPLE_H
