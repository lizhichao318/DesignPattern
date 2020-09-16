#ifndef BIGFILE_H
#define BIGFILE_H
#include "file.h"
#include <QElapsedTimer>
#include <QCoreApplication>

class BigFile : public File
{
public:
    BigFile(const string &m_name):File(m_name)
    {
        longTimeConstruct();
    }
    void showFile() override
    {
        cout <<"չʾ�ļ���"<<name<<endl;
    }
private:
    void longTimeConstruct()
    {
        cout <<name<<" ��ʼ����..."<<endl;
        for( int i = 0;i < 10;++i)
        {
            QElapsedTimer  t;
            t.start();
            while(t.elapsed()<1000)
                QCoreApplication::processEvents();
        }
        cout <<name<<" �������..."<<endl;
    }
};

#endif // BIGFILE_H
