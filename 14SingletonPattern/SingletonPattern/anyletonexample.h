#ifndef ANYLETONEXAMPLE_H
#define ANYLETONEXAMPLE_H
#include "anyletontemple.h"


class AnyletonExample:private AnyletonTemple<AnyletonExample>
{
public:
    static  AnyletonExample * getAnyletonObj(){ return new AnyletonExample() ;}
    static AnyletonExample * getAnyletonObj(const AnyletonExample & obj){ return new AnyletonExample(obj) ;}
    ~AnyletonExample(){};
    using AnyletonTemple<AnyletonExample>::TooMantObj;
    using AnyletonTemple<AnyletonExample>::getCurObjCount;
private:
    AnyletonExample(){};
    AnyletonExample(const AnyletonExample &){}
};

template<typename AnyletonExample>
int AnyletonTemple<AnyletonExample>::curObjCount = 0;

template<typename AnyletonExample>
const int AnyletonTemple<AnyletonExample>::maxObjCount  = 3;


#endif // ANYLETONEXAMPLE_H
