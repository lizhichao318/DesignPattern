#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
using namespace std;

class Singleton
{
public:
    ~Singleton(){  cout << "调用了析构函数" <<endl;}
    Singleton(const Singleton &) = delete ;//阻止拷贝
    Singleton & operator=(const Singleton &) = delete ;//阻止赋值

    static Singleton & getSingleObj()
    {
        static Singleton obj;//静态局部变量
        return  obj;//返回引用
    }

private:
    //构造函数为 private
    Singleton(){ cout << "调用了构造函数" <<endl;}


};

#endif // SINGLETON_H
