#include <QCoreApplication>
#include "forumcontext.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ForumContext * context = new  ForumContext();
    context->SkimActicle();
    context->CommentActicle();
    context->LogIn();
    context->PublishActicle();
    context->PublishActicle();
    context->PublishActicle();
    context->SkimActicle();
    context->PublishActicle();
    context->CommentActicle();
    context->LogIn();
    context->CommentActicle();
    context->CommentActicle();
    context->CommentActicle();
    context->SignOut();

    return a.exec();
}
