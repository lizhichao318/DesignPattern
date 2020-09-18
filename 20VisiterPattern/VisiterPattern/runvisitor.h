#ifndef RUNVISITOR_H
#define RUNVISITOR_H
#include "visitor.h"
class RunVisitor : public Visitor
{
public:
    RunVisitor(){}
    void visit(Dog *animal) override;
    void visit(Cat *animal) override;
};

#endif // RUNVISITOR_H
