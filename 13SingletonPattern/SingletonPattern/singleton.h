#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
using namespace std;

class Singleton
{
public:
    ~Singleton(){  cout << "��������������" <<endl;}
    Singleton(const Singleton &) = delete ;//��ֹ����
    Singleton & operator=(const Singleton &) = delete ;//��ֹ��ֵ

    static Singleton & getSingleObj()
    {
        static Singleton obj;//��̬�ֲ�����
        return  obj;//��������
    }

private:
    //���캯��Ϊ private
    Singleton(){ cout << "�����˹��캯��" <<endl;}


};

#endif // SINGLETON_H
