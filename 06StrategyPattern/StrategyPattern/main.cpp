#include <QCoreApplication>
#include "commonattack.h"
#include "daggerattack.h"
#include "gunattack.h"
#include "plaer.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout <<"***Ӣ�۸ճ������Դ���ͨ����***"<<endl;
    Plaer * hero = new Plaer("����");
    hero->showAttack();
    cout << "***��ɫ���������ذ��***"<<endl;
    shared_ptr<DaggerAttack> dagger = make_shared<DaggerAttack>();
    hero->setAttack(dagger);
    hero->showAttack();
    cout << "***��ɫ�����������ǹ***"<<endl;
    shared_ptr<GunAttack> gun = make_shared<GunAttack>();
    hero->setAttack(gun);
    hero->showAttack();

    return a.exec();
}
