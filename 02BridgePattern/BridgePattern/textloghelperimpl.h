#ifndef TEXTLOGHELPERIMPL_H
#define TEXTLOGHELPERIMPL_H
#include "loghelperimpl.h"

class TextLogHelperimpl : public LogHelperimpl
{
public:
   TextLogHelperimpl(){}
   void saveLog(const string &message) override
   {
       cout << "***文本文件中保存日志***"<<endl;
       cout <<message<<endl;
       cout << "***文本文件中保存日志***"<<endl;
       cout << endl;
   }
};

#endif // TEXTLOGHELPERIMPL_H
