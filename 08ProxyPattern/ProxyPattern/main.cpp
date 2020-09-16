#include <QCoreApplication>
#include "bigfileproxy.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    File * bigfile = new BigFileProxy("BigImage.png");
    bigfile->showFile();
    delete  bigfile;

    return a.exec();
}
