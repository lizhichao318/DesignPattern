#ifndef NEWCOMERSTATE_H
#define NEWCOMERSTATE_H
#include "state.h"
#include "visitorstate.h"
#include "highlevelstate.h"

class NewcomerState : public State
{
public:
    NewcomerState(){}
    void LogIn(ForumContext *) override;
    void SignOut(ForumContext *) override;
    void SkimActicle(ForumContext *) override;
    void CommentActicle(ForumContext *) override;
    void PublishActicle(ForumContext *) override;

};

#endif // NEWCOMERSTATE_H
