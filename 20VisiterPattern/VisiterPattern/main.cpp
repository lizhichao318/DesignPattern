#include <QCoreApplication>
#include "dog.h"
#include "runvisitor.h"
#include "speakvisitor.h"
#include "zoo.h"
#include "cat.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Zoo *zoo = new Zoo ();
        shared_ptr<Dog> dog1(new Dog("̩��"));
        shared_ptr<Dog> dog2(new Dog("��ʿ��"));
        shared_ptr<Cat> cat1(new Cat("��˹è"));
        shared_ptr<Cat> cat2(new Cat("HelloKitty"));
        zoo->addAnimal(dog1);
        zoo->addAnimal(dog2);
        zoo->addAnimal(cat1);
        zoo->addAnimal(cat2);
        cout << "���ж��￪ʼ��:"<<endl;
        SpeakVisitor * speak = new SpeakVisitor () ;
        zoo->accept(speak);
        cout << endl;
        zoo->RemoveAnimal(cat1);//�Ƴ�һ������
        cout << "���ж��￪ʼ��:"<<endl;
        RunVisitor * run = new RunVisitor();
        zoo->accept(run);

    return a.exec();
}
