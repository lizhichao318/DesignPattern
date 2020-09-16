#ifndef HIGHLEVELSTATE_H
#define HIGHLEVELSTATE_H
#include "state.h"
#include "visitorstate.h"
#include "newcomerstate.h"


class HighlevelState : public State
{
public:
    HighlevelState(){}
    void LogIn(ForumContext *) override;
    void SignOut(ForumContext *) override;
    void SkimActicle(ForumContext *) override;
    void CommentActicle(ForumContext *) override;
    void PublishActicle(ForumContext *) override;
};

#endif // HIGHLEVELSTATE_H
