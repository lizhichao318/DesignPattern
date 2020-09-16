#ifndef GRADESHELPERORACEL_H
#define GRADESHELPERORACEL_H
#include <iostream>
#include "gradeshelper.h"
using namespace std;

class GradesHelperOracel : public GradesHelper
{
public:
    GradesHelperOracel(){}
    void saveGrades(const Grades &) override
    {
        cout << "使用 Oracel 数据库保存一个 Grades 对象"<<endl;
    }
    Grades getGrades(int id) override
    {
        cout << "从 Oracel 数据库查询一个 Grades 对象"<<endl;
    }
    static void * getGradesHelperOracel()
    {
        return new  GradesHelperOracel();
    }
};

#endif // GRADESHELPERORACEL_H
