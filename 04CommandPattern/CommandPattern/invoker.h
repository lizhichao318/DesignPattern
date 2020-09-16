#ifndef INVOKER_H
#define INVOKER_H
#include <functional>
#include <map>
#include <iostream>
using namespace std;

class Invoker
{
public:
    Invoker(){}
    typedef function<void()> Command;
    void addCommand(int id,Command & command)
    {
        cout <<"�������"<<id<<endl;
        callbacklist[id] = command;
    }
    void addCommand(int id,Command && command )
    {
        cout <<"�������"<<id<<endl;
        callbacklist[id] = std::move(command);
    }
    void removeCommand(int id)
    {
        cout <<"��������"<<id<<endl;
        callbacklist.erase(id);
    }
    void Notify()
    {
        cout <<"***��ʼִ������***"<<endl;
        for( auto iter = callbacklist.begin();iter != callbacklist.end();++iter)
        {
            cout<<"ִ������"<<iter->first<<":";
            (iter->second)();
        }
    }
private:
    map<int,Command> callbacklist;

};

#endif // INVOKER_H
