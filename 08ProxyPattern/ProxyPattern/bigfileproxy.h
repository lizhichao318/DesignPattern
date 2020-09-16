#ifndef BIGFILEPROXY_H
#define BIGFILEPROXY_H
#include "file.h"
#include "bigfile.h"

class BigFileProxy : public File
{
public:
    BigFileProxy(const string &m_name):File(m_name),m_bigfile(nullptr)
    {
        cout <<"���������..."<<endl;
    }
    ~BigFileProxy(){delete m_bigfile;}
    void showFile() override
    {
        cout << __FUNCTION__<<endl;
        if( m_bigfile == nullptr)
        {
            m_bigfile = new BigFile(name);
        }
        cout<<"����ǰ..."<<endl;
        m_bigfile->showFile();
        cout<<"���ú�..."<<endl;
    }
private:
    BigFile *m_bigfile;

};

#endif // BIGFILEPROXY_H
