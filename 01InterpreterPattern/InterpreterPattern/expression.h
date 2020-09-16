#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <string>
#include <iostream>
using namespace std;
class Context;
class Expression
{
public:
    virtual ~Expression(){}
    virtual double interpret(Context *ctx) = 0;
    virtual void display(Context *ctx) = 0;
};

#endif // EXPRESSION_H
