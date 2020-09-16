#ifndef DBHELPERORACEL_H
#define DBHELPERORACEL_H
#include "dbhelper.h"
#include "studenthelperoracel.h"
#include "gradeshelperoracel.h"

class DbHelperOracel : public DbHelper
{
public:
    DbHelperOracel(){}
    StudentHelper * createStudentHelper() override
    {
        return  new StudentHelperOracel ();
    }
    GradesHelper * createGradesHelper() override
    {
        return new GradesHelperOracel ();
    }
};

#endif // DBHELPERORACEL_H
