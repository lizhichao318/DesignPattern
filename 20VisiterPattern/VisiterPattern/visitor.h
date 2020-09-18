#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
class Dog;
class Cat;
class Visitor
{
public:
    Visitor(){};
    virtual ~Visitor(){}
    virtual void visit(Dog * animal) = 0;
    virtual void visit(Cat * animal) = 0;
};

#endif // VISITOR_H
