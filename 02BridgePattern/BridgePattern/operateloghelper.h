#ifndef OPERATELOGHELPER_H
#define OPERATELOGHELPER_H
#include "loghelper.h"
#include "loghelperimpl.h"

class OperateLogHelper : public LogHelper
{
public:
    using LogHelper::LogHelper;
    void saveLog(const string &message) override
    {
       string dataStr = "<"+ QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss").toStdString()+">";
       string newMessage = dataStr+ "¡¾²Ù×÷ÈÕÖ¾¡¿"+message;
       m_pimpl->saveLog(newMessage);
    }
};

#endif // OPERATELOGHELPER_H
