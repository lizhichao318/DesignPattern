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
        cout << "ʹ�� Access ���ݿⱣ��һ�� Grades ����"<<endl;
    }
    Grades getGrades(int id) override
    {
        cout << "�� Access ���ݿ��ѯһ�� Grades ����"<<endl;
    }
    static void * getGradesHelperAccess()
    {
        return  new  GradesHelperAccess() ;
    }
};

#endif // GRADESHELPERACCESS_H
