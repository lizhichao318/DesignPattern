#include <QCoreApplication>
#include "herorole.h"
#include "petrole.h"
#include "monsterrole.h"
#include "boxrole.h"
using namespace std::placeholders;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HeroRole * hero = new HeroRole("王者");
    PetRole * pet = new PetRole("佩奇");
    MonsterRole * monster1 = new MonsterRole("小boss",6,0);
    MonsterRole * monster2 = new MonsterRole("大boss",10,0);
    BoxRole * box1 = new BoxRole ("小宝箱",5,0);
    BoxRole *box2 = new BoxRole ("大宝箱",8,0);

    hero->moveEvent.addFunc(pet->getName(), bind(&PetRole::followToPiont,pet,_1,_2));
    hero->moveEvent.addFunc(monster1->getName(),bind(&MonsterRole::attactTheHero,monster1,_1,_2));
    hero->moveEvent.addFunc(monster2->getName(),bind(&MonsterRole::attactTheHero,monster2,_1,_2));
    hero->moveEvent.addFunc(box1->getName(),bind(&BoxRole::openBox,box1,_1,_2));
    hero->moveEvent.addFunc(box2->getName(),bind(&BoxRole::openBox,box2,_1,_2));



    hero->moveToPoint(2,0);
    cout << endl;
    hero->moveToPoint(4,0);
    cout << endl;
    hero->moveEvent.removeFunc(box1->getName());
    hero->moveToPoint(8,0);


    return a.exec();
}
