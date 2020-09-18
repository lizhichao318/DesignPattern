#include "dog.h"
#include "visitor.h"
void Dog::accept(Visitor *m_visitor)
{
    m_visitor->visit(this);
}
