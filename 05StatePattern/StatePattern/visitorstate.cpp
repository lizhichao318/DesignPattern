#include "visitorstate.h"
#include "forumcontext.h"

void VisitorState ::LogIn(ForumContext * context)
{
    cout <<"�û�ע���½...��̳�ȼ�Ϊ���֣������������µ�Ȩ��"<<endl;
    context->setState(make_shared<NewcomerState>());
}
void VisitorState ::SignOut(ForumContext *)
{
     cout <<"�ο�״̬...�޷��˳�"<<endl;
}
void VisitorState ::SkimActicle(ForumContext *)
{
    cout <<"�ο����������..."<<endl;
}
void VisitorState ::PublishActicle(ForumContext *)
{
    cout <<"���ȵ�½���ٷ�������..."<<endl;
}
void VisitorState :: CommentActicle(ForumContext *)
{
    cout <<"���ȵ�½���ٷ�������..."<<endl;
}

