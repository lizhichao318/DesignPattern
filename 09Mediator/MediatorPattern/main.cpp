#include <QCoreApplication>
#include "buyer.h"
#include "seller.h"
#include "jx.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //�����н��ߣ�����
    JX * jx = new  JX();
    //�������Һ���Ҷ���
    Seller * seller = new Seller("���ϰ�",jx);
    Buyer * buyer = new Buyer("����",jx);
    jx->iniMediator(buyer,seller);

    //��ҷ�����Ϣ
    buyer->senMessage("��Ҫ���·�");
    //���һظ���Ϣ
    seller->senMessage("�Ҽ�����");

    return a.exec();
}
