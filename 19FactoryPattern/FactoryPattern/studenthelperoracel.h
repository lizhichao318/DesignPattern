#ifndef STUDENTHELPERORACEL_H
#define STUDENTHELPERORACEL_H
#include <iostream>
#include "studenthelper.h"
using namespace std;

class StudentHelperOracel : public StudentHelper
{
public:
    StudentHelperOracel(){}
    void saveStudent(const Student &) override
    {
        cout << "使用 Oracel 数据库保存一个 Student 对象"<<endl;
    }
    Student getStudent(int id) override
    {
        cout << "从 Oracel 数据库查询一个 Student 对象"<<endl;
    }
    static void* getStudentHelperOracel()
    {
        return new  StudentHelperOracel() ;
    }
};

#endif // STUDENTHELPERORACEL_H
