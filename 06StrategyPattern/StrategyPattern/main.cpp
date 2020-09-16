#include <QCoreApplication>
#include "commonattack.h"
#include "daggerattack.h"
#include "gunattack.h"
#include "plaer.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout <<"***英雄刚出场，自带普通攻击***"<<endl;
    Plaer * hero = new Plaer("王者");
    hero->showAttack();
    cout << "***角色升级，获得匕首***"<<endl;
    shared_ptr<DaggerAttack> dagger = make_shared<DaggerAttack>();
    hero->setAttack(dagger);
    hero->showAttack();
    cout << "***角色升级，获得手枪***"<<endl;
    shared_ptr<GunAttack> gun = make_shared<GunAttack>();
    hero->setAttack(gun);
    hero->showAttack();

    return a.exec();
}
