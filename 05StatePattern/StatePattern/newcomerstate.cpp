#include "newcomerstate.h"
#include "forumcontext.h"

void  NewcomerState::LogIn(ForumContext *)
{
    cout <<"当前已登陆...请勿重复登陆"<<endl;
}
void NewcomerState::SignOut(ForumContext * context)
{
    cout <<"退出成功...切换到游客状态"<<endl;
    context->setState(make_shared<VisitorState>());
}
void NewcomerState::SkimActicle(ForumContext *)
{
     cout <<"浏览文章中..."<<endl;
}
void NewcomerState::CommentActicle(ForumContext * )
{
    cout <<"当前等级不能评论，请提升等级..."<<endl;
}
void NewcomerState::PublishActicle(ForumContext *context)
{
    cout <<"文章发表成功...积分+10"<<endl;
    context->setIntegral(context->getIntegral()+10 );
    if( context->getIntegral() >= 30)
    {
        cout <<"等级提升为高级用户...解锁评论的权限"<<endl;
        context->setState(make_shared<HighlevelState>());
    }
}
