#ifndef JX_H
#define JX_H
#include "mediator.h"
#include "buyer.h"
#include "seller.h"

class JX : public Mediator
{
public:
    using Mediator::Mediator;
    JX(Buyer * m_buyer,Seller * m_seller):buyer(m_buyer),seller(m_seller){}
    void iniMediator(Buyer * m_buyer,Seller * m_seller)
    {
        buyer = m_buyer;
        seller = m_seller;
    }
    void senMessage(const string &message, Businessman *man) override
    {
        if( man == buyer )
        {
            seller->getMessage(message);
        }
        else if( man == seller)
        {
            buyer->getMessage(message);
        }
    }
private:
    Buyer * buyer;
    Seller * seller;
};

#endif // JX_H
