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
        cout << "ʹ�� Oracel ���ݿⱣ��һ�� Grades ����"<<endl;
    }
    Grades getGrades(int id) override
    {
        cout << "�� Oracel ���ݿ��ѯһ�� Grades ����"<<endl;
    }
    static void * getGradesHelperOracel()
    {
        return new  GradesHelperOracel();
    }
};

#endif // GRADESHELPERORACEL_H
