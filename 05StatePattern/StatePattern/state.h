#ifndef STATE_H
#define STATE_H
#include "iostream"

using namespace std;
class ForumContext;
class State
{
public:
    virtual ~State(){}
    virtual void SkimActicle(ForumContext *)=0;//浏览
    virtual void PublishActicle(ForumContext *)=0;//发表
    virtual void CommentActicle(ForumContext *)=0;//评论
    virtual void LogIn(ForumContext *) = 0;//登陆
    virtual void SignOut(ForumContext *) = 0;//退出
};

#endif // STATE_H
