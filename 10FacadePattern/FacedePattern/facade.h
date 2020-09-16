#ifndef FACADE_H
#define FACADE_H
#include "subsystemone.h"
#include "subsystemtwo.h"
#include "subsystemthree.h"
#include "subsystemfour.h"

class Facade
{
public:
    Facade(){}
    void MethodA()
    {
        cout << "***方法组A***"<<endl;
        one.MethodOne();
        two.MethodTwo();
        three.MethodThree();
    }
    void MethodB()
    {
        cout << "***方法组B***"<<endl;
        four.MethodFour();
        two.MethodTwo();
        three.MethodThree();
    }
private:
    SubSystemOne one;
    SubSystemTwo two;
    SubSystemThree three;
    SubSystemFour four;
};

#endif // FACADE_H
