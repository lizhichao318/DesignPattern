#include "newcomerstate.h"
#include "forumcontext.h"

void  NewcomerState::LogIn(ForumContext *)
{
    cout <<"��ǰ�ѵ�½...�����ظ���½"<<endl;
}
void NewcomerState::SignOut(ForumContext * context)
{
    cout <<"�˳��ɹ�...�л����ο�״̬"<<endl;
    context->setState(make_shared<VisitorState>());
}
void NewcomerState::SkimActicle(ForumContext *)
{
     cout <<"���������..."<<endl;
}
void NewcomerState::CommentActicle(ForumContext * )
{
    cout <<"��ǰ�ȼ��������ۣ��������ȼ�..."<<endl;
}
void NewcomerState::PublishActicle(ForumContext *context)
{
    cout <<"���·���ɹ�...����+10"<<endl;
    context->setIntegral(context->getIntegral()+10 );
    if( context->getIntegral() >= 30)
    {
        cout <<"�ȼ�����Ϊ�߼��û�...�������۵�Ȩ��"<<endl;
        context->setState(make_shared<HighlevelState>());
    }
}
