#ifndef STUDENTHELPER_H
#define STUDENTHELPER_H
#include "student.h"

class StudentHelper
{
public:
    StudentHelper(){};
    virtual void saveStudent(const Student &) = 0;
    virtual Student getStudent(int id)= 0;
    virtual ~StudentHelper() {}
};

#endif // STUDENTHELPER_H
