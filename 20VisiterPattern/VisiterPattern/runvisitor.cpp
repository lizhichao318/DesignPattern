#include "runvisitor.h"
#include "dog.h"
#include "cat.h"
void RunVisitor::visit(Dog *animal)
{
    cout << animal->getName()+"跑:一蹦一蹦~"<<endl;
}
void RunVisitor::visit(Cat *animal)
{
     cout << animal->getName()+"跑:一跳一跳~"<<endl;
}
