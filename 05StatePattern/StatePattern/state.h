#ifndef STATE_H
#define STATE_H
#include "iostream"

using namespace std;
class ForumContext;
class State
{
public:
    virtual ~State(){}
    virtual void SkimActicle(ForumContext *)=0;//���
    virtual void PublishActicle(ForumContext *)=0;//����
    virtual void CommentActicle(ForumContext *)=0;//����
    virtual void LogIn(ForumContext *) = 0;//��½
    virtual void SignOut(ForumContext *) = 0;//�˳�
};

#endif // STATE_H
