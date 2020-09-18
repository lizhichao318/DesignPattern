#include "cat.h"
#include "visitor.h"
void Cat::accept(Visitor *m_visitor)
{
    m_visitor->visit(this);
}
