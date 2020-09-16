#ifndef GRADESHELPERACCESS_H
#define GRADESHELPERACCESS_H
#include <iostream>
#include "gradeshelper.h"
using namespace std;
class GradesHelperAccess : public GradesHelper
{
public:
    GradesHelperAccess(){}
    void saveGrades(const Grades &) override
    {
        cout << "使用 Access 数据库保存一个 Grades 对象"<<endl;
    }
    Grades getGrades(int id) override
    {
        cout << "从 Access 数据库查询一个 Grades 对象"<<endl;
    }
    static void * getGradesHelperAccess()
    {
        return  new  GradesHelperAccess() ;
    }
};

#endif // GRADESHELPERACCESS_H
