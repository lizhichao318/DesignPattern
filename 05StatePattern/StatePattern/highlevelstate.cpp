#include "highlevelstate.h"
#include "forumcontext.h"

void HighlevelState::LogIn(ForumContext * )
{
    cout <<"��ǰ�ѵ�½...�����ظ���½"<<endl;
}
void HighlevelState::SignOut(ForumContext * context)
{
    cout <<"�˳��ɹ�...�л����ο�״̬"<<endl;
    context->setState(make_shared<VisitorState>());
}
void HighlevelState::SkimActicle(ForumContext *)
{
    cout <<"���������..."<<endl;
}
void HighlevelState::CommentActicle(ForumContext * context)
{
    cout <<"��������...���������ۣ�����-5"<<endl;
    context->setIntegral(context->getIntegral() -5 );
    if( context->getIntegral() < 30)
    {
        cout <<"�ȼ�����Ϊ�����û�...�ر����۵�Ȩ��"<<endl;
        context->setState(make_shared<NewcomerState>());
    }
}
void HighlevelState::PublishActicle(ForumContext * context)
{
    cout <<"���·���ɹ�...����+10"<<endl;
    context->setIntegral(context->getIntegral()+10 );
}
