#ifndef FORUMCONTEXT_H
#define FORUMCONTEXT_H
#include <memory>
#include "state.h"
#include "visitorstate.h"
using namespace std;

class ForumContext
{
public:
    //初始默认为游客状态
    ForumContext(int m_integral = 0,shared_ptr<State> m_state = make_shared<VisitorState>()):integral(m_integral),state(m_state){}
    //以下行为方式由状态决定，调用对应状态中的方法
    void SkimActicle()//浏览
    {
        state->SkimActicle(this);
    }
    void PublishActicle()//发表
    {
        state->PublishActicle(this);
    }
    void CommentActicle()//评论
    {
        state->CommentActicle(this);
    }
    void LogIn() //登陆
    {
        state->LogIn(this);
    }
    void SignOut() //退出
    {
        state->SignOut(this);
    }
    //变更状态
    void setState(shared_ptr<State> m_state)
    {
        state = m_state;
    }
    //设置积分
    void setIntegral(int m_integral)
    {
        integral = m_integral;
    }
    int getIntegral() const
    {
        return integral;
    }
private:
    int integral;//积分
    shared_ptr<State> state;//当前状态
};

#endif // FORUMCONTEXT_H
