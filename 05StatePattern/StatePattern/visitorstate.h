#ifndef VISITORSTATE_H
#define VISITORSTATE_H
#include "state.h"
#include "newcomerstate.h"

class VisitorState : public State
{
public:
    VisitorState(){}
    void LogIn(ForumContext *) override;
    void SignOut(ForumContext *) override;
    void SkimActicle(ForumContext *) override;
    void CommentActicle(ForumContext *) override;
    void PublishActicle(ForumContext *) override;

};

#endif // VISITORSTATE_H
