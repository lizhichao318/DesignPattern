#ifndef FILE_H
#define FILE_H
#include <string>
#include <iostream>
using namespace std;

class File
{
public:
    File(const string &m_name):name(m_name){}
    virtual ~File(){}
    virtual void showFile() = 0;
protected:
    string name;

};

#endif // FILE_H
