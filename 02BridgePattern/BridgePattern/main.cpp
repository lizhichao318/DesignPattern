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
    errortotext->saveLog("对象创建出错");
    shared_ptr<LogHelper> operatetotext(new OperateLogHelper(textlog));
    operatetotext->saveLog("删除了记录");

    shared_ptr<LogHelperimpl> dblog(new DataBaseLogHelperimpl());
    shared_ptr<LogHelper> errortodb(new ErrorLogHelper(dblog));
    errortodb->saveLog("内存泄漏");
    shared_ptr<LogHelper> operatetodb(new OperateLogHelper(dblog));
    operatetodb->saveLog("添加了一条新记录");

    return a.exec();
}
