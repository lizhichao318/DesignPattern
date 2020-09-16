#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "businessman.h"

class Mediator
{
public:
    Mediator(){}
    virtual void senMessage(const string &message,Businessman * man) = 0;
    virtual ~Mediator(){}

};

#endif // MEDIATOR_H
