#ifndef NEGATIVEUNARYEXPRESSION_H
#define NEGATIVEUNARYEXPRESSION_H
#include "unaryexpression.h"


class NegativeUnaryExpression : public UnaryExpression
{
public:
    using UnaryExpression::UnaryExpression;
    double interpret(Context *ctx) override
    {
        return - mExpression->interpret(ctx);
    }
    void display(Context * ctx) override
    {
        cout << "-";
        mExpression->display(ctx);
    }
};

#endif // NEGATIVEUNARYEXPRESSION_H
