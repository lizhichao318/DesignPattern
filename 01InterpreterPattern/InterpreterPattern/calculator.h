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
    string m_expression;//Ҫ�����ı��ʽ
    int curIndex =0;//��ǰ��������λ��
    shared_ptr<Context> m_contex;//�����ֵ�

    bool ReadConstant(shared_ptr<Expression> &exp);//��ȡһ����������
    bool ReadVariable(shared_ptr<Expression> &exp);//��ȡһ������
    bool ReadOperator(const char & oper);//��ȡһ��������
    bool ReadExpression(shared_ptr<Expression> &exp,string &error);//��ȡһ�����ʽ
    bool ReadFactor(shared_ptr<Expression> &exp,string &error);//��ȡһ�����ȼ���Ķ������ʽ
    bool ReadIterm(shared_ptr<Expression> &exp,string &error);//��ȡһ��������


};

#endif // CALCULATOR_H
