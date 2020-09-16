#include <QCoreApplication>
#include "errorloghelper.h"
#include "operateloghelper.h"
#include "textloghelperimpl.h"
#include "databaseloghelperimpl.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    shared_ptr<LogHelperimpl> textlog(new TextLogHelperimpl());
    shared_ptr<LogHelper> errortotext(new ErrorLogHelper(textlog));
    errortotext->saveLog("���󴴽�����");
    shared_ptr<LogHelper> operatetotext(new OperateLogHelper(textlog));
    operatetotext->saveLog("ɾ���˼�¼");

    shared_ptr<LogHelperimpl> dblog(new DataBaseLogHelperimpl());
    shared_ptr<LogHelper> errortodb(new ErrorLogHelper(dblog));
    errortodb->saveLog("�ڴ�й©");
    shared_ptr<LogHelper> operatetodb(new OperateLogHelper(dblog));
    operatetodb->saveLog("�����һ���¼�¼");

    return a.exec();
}
