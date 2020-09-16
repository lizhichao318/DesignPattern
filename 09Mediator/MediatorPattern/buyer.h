#ifndef BUYER_H
#define BUYER_H
#include "businessman.h"
#include "mediator.h"
class Buyer:public Businessman
{
public:
    using Businessman::Businessman;
    void getMessage(const string &message) override
    {
       cout << name <<"收到"<<message<<endl;
    }
    void senMessage(const string &message) override
    {
        mediator->senMessage("来自"+name+"的消息："+message,this);
    }

};

#endif // BUYER_H
