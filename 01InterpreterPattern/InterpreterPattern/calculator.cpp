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
    //ɾ����ͷ�ո�
    m_expression.erase(0,m_expression.find_first_not_of(" "));

    shared_ptr<Expression> exp;
    if( ReadExpression(exp,error))
    {
       cout << "���ʽ����Ϊ:";
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
    if( ReadFactor(resultFactor,error))//��ȡ����һ�����ȼ���Ķ������ʽ
    {
        while(true)//ѭ����ȡ
        {
            if(curIndex < (int)m_expression.size() )
            {
                if( ReadOperator('+'))
                {
                    if( ReadFactor(nextFactor,error))
                        resultFactor = make_shared<AddBinaryExpression>(resultFactor,nextFactor);
                    else//��ȡ��һ��ʧ��
                    {
                        isok = false;
                        break;
                    }
                }
                else  if( ReadOperator('-'))
                {
                    if( ReadFactor(nextFactor,error))
                        resultFactor = make_shared<SubBinaryExpression>(resultFactor,nextFactor);
                    else//��ȡ��һ��ʧ��
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
    else//��ȡʧ��
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
    if(ReadConstant(exp)) {} //��ȡ��һ����������
    else if ( ReadVariable(exp)) { }
    else if( ReadOperator('('))//����������
    {
        if(  ReadExpression(exp,error) )
        {
            if(!ReadOperator(')'))
            {
                error = "����ʧ��:��λ��:"+to_string(curIndex)+" û�н�����������";
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
        error = "����ʧ��:λ��:"+to_string(curIndex)+" �޷�����";
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


