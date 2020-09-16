#include "visitorstate.h"
#include "forumcontext.h"

void VisitorState ::LogIn(ForumContext * context)
{
    cout <<"用户注册登陆...论坛等级为新手，解锁发表文章的权限"<<endl;
    context->setState(make_shared<NewcomerState>());
}
void VisitorState ::SignOut(ForumContext *)
{
     cout <<"游客状态...无法退出"<<endl;
}
void VisitorState ::SkimActicle(ForumContext *)
{
    cout <<"游客浏览文章中..."<<endl;
}
void VisitorState ::PublishActicle(ForumContext *)
{
    cout <<"请先登陆后再发表文章..."<<endl;
}
void VisitorState :: CommentActicle(ForumContext *)
{
    cout <<"请先登陆后再发表评论..."<<endl;
}

