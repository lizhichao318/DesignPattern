#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include <map>
using namespace std;

template< typename F>
class EventHandler
{
public:
    EventHandler() = default;
    ~EventHandler() = default;
    EventHandler(const EventHandler&) = delete ;
    EventHandler & operator=(const EventHandler &) = delete ;

    void addFunc(const string &name,F &f )
    {
        callbacklist[name] = f;
    }
    void addFunc(const string &name,F &&f )
    {
        callbacklist[name] = std::move(f);
    }
    void removeFunc(const string &name)
    {
        callbacklist.erase(name);
    }
    void clearFunc()
    {
        callbacklist.clear();
    }
    template<typename... Args >
    void operator()(Args&&... args )
    {
        Notify(std::forward<Args>(args)...);
    }

private:
    map<string,F> callbacklist;

    template<typename... Args >
    void Notify(Args&&... args )
    {
        for(auto iter = callbacklist.begin();iter != callbacklist.end();++iter)
        {
            (iter->second)(std::forward<Args>(args)...);
        }
    }

};

#endif // EVENTHANDLER_H
