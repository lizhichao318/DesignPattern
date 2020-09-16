#ifndef BIGFILEPROXY_H
#define BIGFILEPROXY_H
#include "file.h"
#include "bigfile.h"

class BigFileProxy : public File
{
public:
    BigFileProxy(const string &m_name):File(m_name),m_bigfile(nullptr)
    {
        cout <<"代理构造完成..."<<endl;
    }
    ~BigFileProxy(){delete m_bigfile;}
    void showFile() override
    {
        cout << __FUNCTION__<<endl;
        if( m_bigfile == nullptr)
        {
            m_bigfile = new BigFile(name);
        }
        cout<<"调用前..."<<endl;
        m_bigfile->showFile();
        cout<<"调用后..."<<endl;
    }
private:
    BigFile *m_bigfile;

};

#endif // BIGFILEPROXY_H
