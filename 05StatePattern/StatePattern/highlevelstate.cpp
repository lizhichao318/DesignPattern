#include "highlevelstate.h"
#include "forumcontext.h"

void HighlevelState::LogIn(ForumContext * )
{
    cout <<"当前已登陆...请勿重复登陆"<<endl;
}
void HighlevelState::SignOut(ForumContext * context)
{
    cout <<"退出成功...切换到游客状态"<<endl;
    context->setState(make_shared<VisitorState>());
}
void HighlevelState::SkimActicle(ForumContext *)
{
    cout <<"浏览文章中..."<<endl;
}
void HighlevelState::CommentActicle(ForumContext * context)
{
    cout <<"发表评论...不正当言论，积分-5"<<endl;
    context->setIntegral(context->getIntegral() -5 );
    if( context->getIntegral() < 30)
    {
        cout <<"等级降级为新手用户...关闭评论的权限"<<endl;
        context->setState(make_shared<NewcomerState>());
    }
}
void HighlevelState::PublishActicle(ForumContext * context)
{
    cout <<"文章发表成功...积分+10"<<endl;
    context->setIntegral(context->getIntegral()+10 );
}
