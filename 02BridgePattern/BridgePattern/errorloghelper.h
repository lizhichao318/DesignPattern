#ifndef ERRORLOGHELPER_H
#define ERRORLOGHELPER_H
#include "loghelper.h"
#include "loghelperimpl.h"

class ErrorLogHelper : public LogHelper
{
public:
    using LogHelper::LogHelper;
    void saveLog(const string &message) override
    {
       string dataStr = "<"+ QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss").toStdString()+">";
       string newMessage = dataStr+ "¡¾´íÎóÈÕÖ¾¡¿"+message;
       m_pimpl->saveLog(newMessage);
    }
};

#endif // ERRORLOGHELPER_H
