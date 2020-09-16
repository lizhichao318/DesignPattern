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
        cout <<"Ìí¼ÓÃüÁî"<<id<<endl;
        callbacklist[id] = command;
    }
    void addCommand(int id,Command && command )
    {
        cout <<"Ìí¼ÓÃüÁî"<<id<<endl;
        callbacklist[id] = std::move(command);
    }
    void removeCommand(int id)
    {
        cout <<"³·ÏúÃüÁî"<<id<<endl;
        callbacklist.erase(id);
    }
    void Notify()
    {
        cout <<"***¿ªÊ¼Ö´ÐÐÃüÁî***"<<endl;
        for( auto iter = callbacklist.begin();iter != callbacklist.end();++iter)
        {
            cout<<"Ö´ÐÐÃüÁî"<<iter->first<<":";
            (iter->second)();
        }
    }
private:
    map<int,Command> callbacklist;

};

#endif // INVOKER_H
