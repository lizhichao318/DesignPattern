#include "variable.h"
#include "context.h"

double Variable::interpret(Context *ctx)
{
    return ctx->lookUpValue(this->virname);
}

void Variable::display(Context *ctx)
{
    cout << ctx->lookUpValue(this->virname);
}
