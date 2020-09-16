#ifndef BUSINESSMAN_H
#define BUSINESSMAN_H
#include <string>
#include <iostream>
using namespace std;

class Mediator;
class Businessman
{
public:
    Businessman(string m_name,Mediator * m_mediator ):name(m_name),mediator(m_mediator){}
    virtual void senMessage(const string &message)= 0;
    virtual void getMessage(const string &message) = 0;
    virtual ~Businessman(){}

protected:
    string name;
    Mediator * mediator;
};

#endif // BUSINESSMAN_H
