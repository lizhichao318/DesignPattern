#ifndef GRADESHELPER_H
#define GRADESHELPER_H
#include "grades.h"

class GradesHelper
{
public:
    GradesHelper(){}
    virtual void saveGrades(const Grades &) = 0;
    virtual Grades getGrades(int id) = 0;
    virtual ~GradesHelper(){}
};

#endif // GRADESHELPER_H
