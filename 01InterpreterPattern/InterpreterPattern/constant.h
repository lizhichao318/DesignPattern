#ifndef CONSTANT_H
#define CONSTANT_H
#include "expression.h"

class Constant : public Expression
{
public:
    Constant(double value):m_value(value){}
    double interpret(Context *) override
    {
        return  m_value;
    }
    void display(Context *) override
    {
        cout << m_value;
    }
private:
    double m_value;
};

#endif // CONSTANT_H
