#ifndef LOGHELPERIMPL_H
#define LOGHELPERIMPL_H
#include <string>
#include <iostream>
using namespace std;

class LogHelperimpl
{
public:
    virtual ~LogHelperimpl(){}
    virtual void saveLog(const string &message) = 0;
};

#endif // LOGHELPERIMPL_H
