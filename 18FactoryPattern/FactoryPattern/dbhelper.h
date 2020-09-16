#ifndef DBHELPER_H
#define DBHELPER_H
#include "studenthelper.h"
#include "gradeshelper.h"

class DbHelper
{
public:
    DbHelper(){}
    virtual ~DbHelper(){}
    virtual StudentHelper * createStudentHelper() =0;
    virtual GradesHelper * createGradesHelper() = 0;

};

#endif // DBHELPER_H
