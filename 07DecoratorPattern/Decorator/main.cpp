#include <QCoreApplication>
#include "baseeggcake.h"
#include "eggcakeaddegg.h"
#include "eggcakeaddbacon.h"
#include "eggcakeaddsausage.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EggCake * basecake =new Decorator(new BaseEggCake());

    basecake = new EggCakeAddEgg(basecake);
    basecake = new EggCakeAddEgg(basecake);
    basecake = new EggCakeAddBacon(basecake);
    basecake = new EggCakeAddSausage(basecake);

    basecake->showCake();
    cout << "ºÀ»ª°æ×Ü¼Û:"<<basecake->getPrice()<<endl;

    delete  basecake;


    return a.exec();
}
