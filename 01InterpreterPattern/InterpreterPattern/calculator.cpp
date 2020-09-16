#include "calculator.h"
#include "expression.h"
#include "addbinaryexpression.h"
#include "subbinaryexpression.h"
#include "mulbinaryexpression.h"
#include "divbinaryexpression.h"
#include "positiveunaryexpression.h"
#include "negativeunaryexpression.h"
#include "constant.h"
#include "variable.h"


bool Calculator:: getCalculatorResult(double &result,string &error)
{
    //删除开头空格
    m_expression.erase(0,m_expression.find_first_not_of(" "));

    shared_ptr<Expression> exp;
    if( ReadExpression(exp,error))
    {
       cout << "表达式解析为:";
       exp->display(m_contex.get()) ;
       cout << endl;
       result = exp->interpret(m_contex.get());
       return  true;
    }
    return false;
}

bool Calculator::ReadConstant(shared_ptr<Expression> &exp)
{
    bool readNum = false;
    bool readPoint = false;
    string resDouble = "";
    for( ;curIndex< (int)m_expression.size();++curIndex)
    {
        if( m_expression[curIndex] >= '0' && m_expression[curIndex] <= '9')
        {
            readNum = true;
            resDouble.push_back(m_expression[curIndex]);
        }
        else if( m_expression[curIndex] == '.')
        {
            if(readNum && !readPoint)
            {
                readPoint = true;
                resDouble.push_back(m_expression[curIndex]);
            }
            else
                break;
        }
        else
        {
            break;
        }
    }
    if( resDouble != "")
    {
        exp = make_shared<Constant>(atof(resDouble.c_str()));
        return true;
    }
    return false;
}

bool Calculator::ReadExpression(shared_ptr<Expression> &resultFactor,string &error)
{
    shared_ptr<Expression> nextFactor;
    bool isok = true;
    if( ReadFactor(resultFactor,error))//读取到了一个优先计算的独立表达式
    {
        while(true)//循环读取
        {
            if(curIndex < (int)m_expression.size() )
            {
                if( ReadOperator('+'))
                {
                    if( ReadFactor(nextFactor,error))
                        resultFactor = make_shared<AddBinaryExpression>(resultFactor,nextFactor);
                    else//读取下一项失败
                    {
                        isok = false;
                        break;
                    }
                }
                else  if( ReadOperator('-'))
                {
                    if( ReadFactor(nextFactor,error))
                        resultFactor = make_shared<SubBinaryExpression>(resultFactor,nextFactor);
                    else//读取下一项失败
                    {
                        isok = false;
                        break;
                    }
                }
                else break;
            }
            else break;
        }
    }
    else//读取失败
    {
        isok = false;
    }
    return isok;

}

bool Calculator::ReadFactor(shared_ptr<Expression> &resultIterm,string &error)
{
    shared_ptr<Expression> nextIterm;
    bool isok = true;
    if( ReadIterm(resultIterm,error))
    {
        while(true)
        {
            if(curIndex < (int)m_expression.size() )
            {
                if(ReadOperator('*'))
                {
                    if(ReadIterm(nextIterm,error))
                        resultIterm = make_shared<MulBinaryExpression>(resultIterm,nextIterm);
                    else
                    {
                        isok = false;
                        break;
                    }
                }
                else if(ReadOperator('/'))
                {
                    if(ReadIterm(nextIterm,error))
                        resultIterm = make_shared<DivBinaryExpression>(resultIterm,nextIterm);
                    else
                    {
                        isok = false;
                        break;
                    }
                }
                else  break;
            }
            else break;
        }
    }
    else
    {
        isok = false;
    }
    return  isok;
}

bool Calculator::ReadIterm(shared_ptr<Expression> &exp,string &error)
{
    bool isok = true;
    if(ReadConstant(exp)) {} //读取到一个常量数字
    else if ( ReadVariable(exp)) { }
    else if( ReadOperator('('))//读到左括号
    {
        if(  ReadExpression(exp,error) )
        {
            if(!ReadOperator(')'))
            {
                error = "解析失败:在位置:"+to_string(curIndex)+" 没有解析到右括号";
                isok = false;
            }
        }
        else
            isok = false;
    }
    else if( ReadOperator('+'))
    {
        shared_ptr<Expression> nextFactor;
        if( ReadFactor(nextFactor,error))
        {
            exp = make_shared<PositiveUnaryExpression>(nextFactor);
        }
        else
            isok = false;
    }
    else if(ReadOperator('-'))
    {
        shared_ptr<Expression> nextFactor;
        if( ReadFactor(nextFactor,error))
        {
            exp = make_shared<NegativeUnaryExpression>(nextFactor);
        }
        else
            isok = false;
    }
    else
    {
        isok = false;
        error = "解析失败:位置:"+to_string(curIndex)+" 无法解析";
    }
    return isok;
}

bool Calculator::ReadVariable(shared_ptr<Expression> &exp)
{
    string temp;
    temp.push_back(m_expression[curIndex]);
    shared_ptr<Variable> var(new Variable(temp));
    if(m_contex->findVariable(temp))
    {
        exp = var;
        curIndex++;
        return true;
    }
    return  false;
}

bool Calculator::ReadOperator(const char &oper)
{
    if( m_expression[curIndex] == oper)
    {
        curIndex++;
    }
    else
    {
        return  false;
    }
    return true;
}


