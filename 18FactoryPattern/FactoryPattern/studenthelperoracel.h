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
        cout << "ʹ�� Oracel ���ݿⱣ��һ�� Student ����"<<endl;
    }
    Student getStudent(int id) override
    {
        cout << "�� Oracel ���ݿ��ѯһ�� Student ����"<<endl;
    }
    static void* getStudentHelperOracel()
    {
        return new  StudentHelperOracel() ;
    }
};

#endif // STUDENTHELPERORACEL_H
