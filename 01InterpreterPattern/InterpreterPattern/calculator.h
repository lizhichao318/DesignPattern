#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "context.h"
#include <string>
#include <memory>
using namespace std;

class Expression;
class Calculator
{
public:
    Calculator(const string &expression,shared_ptr<Context> &contex):m_expression(expression),m_contex(contex){}
    bool  getCalculatorResult(double &result,string &error);


private:
    string m_expression;//要解析的表达式
    int curIndex =0;//当前解析到的位置
    shared_ptr<Context> m_contex;//解析字典

    bool ReadConstant(shared_ptr<Expression> &exp);//读取一个常量数字
    bool ReadVariable(shared_ptr<Expression> &exp);//读取一个变量
    bool ReadOperator(const char & oper);//读取一个操作符
    bool ReadExpression(shared_ptr<Expression> &exp,string &error);//读取一个表达式
    bool ReadFactor(shared_ptr<Expression> &exp,string &error);//读取一个优先计算的独立表达式
    bool ReadIterm(shared_ptr<Expression> &exp,string &error);//读取一个独立项


};

#endif // CALCULATOR_H
