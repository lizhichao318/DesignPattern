#ifndef DBHELPERACCESS_H
#define DBHELPERACCESS_H
#include "dbhelper.h"
#include "studenthelperaccess.h"
#include "gradeshelperaccess.h"
class DbHelperAccess : public DbHelper
{
public:
    DbHelperAccess(){}
    StudentHelper * createStudentHelper() override
    {
        return new StudentHelperAccess();
    }
    GradesHelper * createGradesHelper() override
    {
        return new GradesHelperAccess();
    }
};

#endif // DBHELPERACCESS_H
