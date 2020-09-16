#ifndef FORUMCONTEXT_H
#define FORUMCONTEXT_H
#include <memory>
#include "state.h"
#include "visitorstate.h"
using namespace std;

class ForumContext
{
public:
    //��ʼĬ��Ϊ�ο�״̬
    ForumContext(int m_integral = 0,shared_ptr<State> m_state = make_shared<VisitorState>()):integral(m_integral),state(m_state){}
    //������Ϊ��ʽ��״̬���������ö�Ӧ״̬�еķ���
    void SkimActicle()//���
    {
        state->SkimActicle(this);
    }
    void PublishActicle()//����
    {
        state->PublishActicle(this);
    }
    void CommentActicle()//����
    {
        state->CommentActicle(this);
    }
    void LogIn() //��½
    {
        state->LogIn(this);
    }
    void SignOut() //�˳�
    {
        state->SignOut(this);
    }
    //���״̬
    void setState(shared_ptr<State> m_state)
    {
        state = m_state;
    }
    //���û���
    void setIntegral(int m_integral)
    {
        integral = m_integral;
    }
    int getIntegral() const
    {
        return integral;
    }
private:
    int integral;//����
    shared_ptr<State> state;//��ǰ״̬
};

#endif // FORUMCONTEXT_H
