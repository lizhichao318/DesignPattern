#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include "expression.h"
#include "memory"
using namespace std;

class BinaryExpression : public Expression
{
public:
    BinaryExpression(shared_ptr<Expression> left,shared_ptr<Expression> right):leftExpression(left),rightExpression(right){}
protected:
    shared_ptr<Expression> leftExpression;
    shared_ptr<Expression> rightExpression;
};

#endif // BINARYEXPRESSION_H
