#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H
#include "expression.h"
#include <memory>
using namespace std;

class UnaryExpression : public Expression
{
public:
    UnaryExpression(shared_ptr<Expression> expression):mExpression(expression){}
protected:
    shared_ptr<Expression> mExpression;
};

#endif // UNARYEXPRESSION_H
