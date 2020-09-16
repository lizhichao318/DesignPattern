#ifndef POSITIVEUNARYEXPRESSION_H
#define POSITIVEUNARYEXPRESSION_H
#include "unaryexpression.h"

class PositiveUnaryExpression : public UnaryExpression
{
public:
    using UnaryExpression::UnaryExpression;
    double interpret(Context *ctx) override
    {
        return  mExpression->interpret(ctx);
    }
    void display(Context * ctx) override
    {
        cout << "+";
        mExpression->display(ctx);
    }
};

#endif // POSITIVEUNARYEXPRESSION_H
