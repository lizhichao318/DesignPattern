#ifndef TEXTLOGHELPERIMPL_H
#define TEXTLOGHELPERIMPL_H
#include "loghelperimpl.h"

class TextLogHelperimpl : public LogHelperimpl
{
public:
   TextLogHelperimpl(){}
   void saveLog(const string &message) override
   {
       cout << "***�ı��ļ��б�����־***"<<endl;
       cout <<message<<endl;
       cout << "***�ı��ļ��б�����־***"<<endl;
       cout << endl;
   }
};

#endif // TEXTLOGHELPERIMPL_H
