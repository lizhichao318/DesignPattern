#ifndef LOGHELPER_H
#define LOGHELPER_H
#include <string>
#include <memory>
#include <qdatetime.h>
using namespace std;

class LogHelperimpl;
class LogHelper
{
public:
    LogHelper(shared_ptr<LogHelperimpl> &pimpl ):m_pimpl(pimpl){}
    virtual ~LogHelper(){}
    virtual void saveLog(const string &message) = 0;
protected:
    shared_ptr<LogHelperimpl> m_pimpl;
};

#endif // LOGHELPER_H
