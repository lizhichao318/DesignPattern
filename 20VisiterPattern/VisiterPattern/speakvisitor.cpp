#include "speakvisitor.h"
#include "cat.h"
#include "dog.h"
void SpeakVisitor::visit(Cat *animal)
{
    cout << animal->getName()+"На:пїпї~"<<endl;
}
void SpeakVisitor::visit(Dog *animal)
{
     cout << animal->getName()+"На:ЭєЭє~"<<endl;
}
