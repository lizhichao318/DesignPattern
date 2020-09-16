#include <QCoreApplication>
#include "calculator.h"

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string expression = "a-10+b*(c+5)";

    shared_ptr<Context> context(new Context() );

    context->registerVariable("a",10);
    context->registerVariable("b",200);
    context->registerVariable("c",5);
    context->registerVariable("d",20);

    Calculator * calculator = new  Calculator(expression,context);
    string error;
    double result;
    calculator->getCalculatorResult(result,error);
    cout << "计算结果为:"<<result;


    return a.exec();
}
