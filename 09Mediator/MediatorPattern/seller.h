#ifndef SELLER_H
#define SELLER_H
#include "businessman.h"
#include "mediator.h"
class Seller : public Businessman
{
public:
    using Businessman::Businessman;
    void getMessage(const string &message) override
    {
        cout << name <<"�յ�"<<message<<endl;
    }
    void senMessage(const string &message) override
    {
         mediator->senMessage("����"+name+"����Ϣ��"+message,this);
    }
};

#endif // SELLER_H
