#ifndef STUDENTHELPERACCESS_H
#define STUDENTHELPERACCESS_H
#include <iostream>
#include "studenthelper.h"
using namespace std;
class StudentHelperAccess : public StudentHelper
{
public:
    StudentHelperAccess(){}
    void saveStudent(const Student &) override
    {
        cout << "使用 Access 数据库保存一个 Student 对象"<<endl;
    }
    Student getStudent(int id) override
    {
        cout << "从 Access 数据库查询一个 Student 对象"<<endl;
    }
    static void * getStudentHelperAccess()
    {
        return  new  StudentHelperAccess() ;
    }
};

#endif // STUDENTHELPERACCESS_H
