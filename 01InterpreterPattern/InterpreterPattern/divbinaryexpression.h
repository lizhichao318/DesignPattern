#ifndef DIVBINARYEXPRESSION_H
#define DIVBINARYEXPRESSION_H
#include "binaryexpression.h"

class DivBinaryExpression : public BinaryExpression
{
public:
    using BinaryExpression::BinaryExpression;
    double interpret(Context *ctx) override
    {
        return leftExpression->interpret(ctx) / rightExpression->interpret(ctx);
    }
    void display(Context * ctx) override
    {
        leftExpression->display(ctx);
        cout << "/";
        rightExpression->display(ctx);
    }
};

#endif // DIVBINARYEXPRESSION_H
