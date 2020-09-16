#include <QCoreApplication>
#include "buyer.h"
#include "seller.h"
#include "jx.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //创建中介者：京西
    JX * jx = new  JX();
    //创建卖家和买家对象
    Seller * seller = new Seller("王老板",jx);
    Buyer * buyer = new Buyer("张三",jx);
    jx->iniMediator(buyer,seller);

    //买家发布消息
    buyer->senMessage("我要买衣服");
    //卖家回复消息
    seller->senMessage("我家有卖");

    return a.exec();
}
