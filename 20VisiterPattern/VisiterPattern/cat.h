#ifndef CAT_H
#define CAT_H
#include "animal.h"
class Cat : public Animal
{
public:
    using Animal::Animal;
    void accept(Visitor *m_visitor) override;
};

#endif // CAT_H
