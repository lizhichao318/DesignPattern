#ifndef SPEAKVISITOR_H
#define SPEAKVISITOR_H
#include "visitor.h"
class SpeakVisitor : public Visitor
{
public:
    SpeakVisitor(){}
    void visit(Cat *animal) override;
    void visit(Dog *animal) override;
};

#endif // SPEAKVISITOR_H
