#include "runvisitor.h"
#include "dog.h"
#include "cat.h"
void RunVisitor::visit(Dog *animal)
{
    cout << animal->getName()+"��:һ��һ��~"<<endl;
}
void RunVisitor::visit(Cat *animal)
{
     cout << animal->getName()+"��:һ��һ��~"<<endl;
}
