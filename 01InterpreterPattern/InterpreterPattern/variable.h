#ifndef VARIABLE_H
#define VARIABLE_H
#include "expression.h"

class Variable : public Expression
{
public:
    Variable(const string &m_name):virname(m_name){}
    virtual double interpret(Context *ctx) override;
    string getName() const { return  virname ;}
    void display(Context *ctx) override;

private:
    string virname;//±äÁ¿Ãû³Æ
};

#endif // VARIABLE_H
