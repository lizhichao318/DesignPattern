#ifndef DATABASELOGHELPERIMPL_H
#define DATABASELOGHELPERIMPL_H
#include "loghelperimpl.h"

class DataBaseLogHelperimpl : public LogHelperimpl
{
public:
    DataBaseLogHelperimpl(){}
    void saveLog(const string &message) override
    {
        cout << "***���ݿ��ļ��б�����־***"<<endl;
        cout <<message<<endl;
        cout << "***���ݿ��ļ��б�����־***"<<endl;
        cout << endl;
    }
};

#endif // DATABASELOGHELPERIMPL_H
