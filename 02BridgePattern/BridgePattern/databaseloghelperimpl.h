#ifndef DATABASELOGHELPERIMPL_H
#define DATABASELOGHELPERIMPL_H
#include "loghelperimpl.h"

class DataBaseLogHelperimpl : public LogHelperimpl
{
public:
    DataBaseLogHelperimpl(){}
    void saveLog(const string &message) override
    {
        cout << "***数据库文件中保存日志***"<<endl;
        cout <<message<<endl;
        cout << "***数据库文件中保存日志***"<<endl;
        cout << endl;
    }
};

#endif // DATABASELOGHELPERIMPL_H
