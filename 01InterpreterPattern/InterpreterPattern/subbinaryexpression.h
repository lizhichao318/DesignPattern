#ifndef SUBBINARYEXPRESSION_H
#define SUBBINARYEXPRESSION_H
#include "binaryexpression.h"

class SubBinaryExpression : public BinaryExpression
{
public:
    using BinaryExpression::BinaryExpression;
    double interpret(Context *ctx) override
    {
        return leftExpression->interpret(ctx) - rightExpression->interpret(ctx);
    }
    void display(Context * ctx) override
    {
        leftExpression->display(ctx);
        cout << "-";
        rightExpression->display(ctx);
    }
};

#endif // SUBBINARYEXPRESSION_H
