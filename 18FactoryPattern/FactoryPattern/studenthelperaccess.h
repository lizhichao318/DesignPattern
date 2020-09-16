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
        cout << "ʹ�� Access ���ݿⱣ��һ�� Student ����"<<endl;
    }
    Student getStudent(int id) override
    {
        cout << "�� Access ���ݿ��ѯһ�� Student ����"<<endl;
    }
    static void * getStudentHelperAccess()
    {
        return  new  StudentHelperAccess() ;
    }
};

#endif // STUDENTHELPERACCESS_H
