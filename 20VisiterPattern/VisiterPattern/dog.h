#ifndef DOG_H
#define DOG_H
#include "animal.h"
class Dog : public Animal
{
public:
    using Animal::Animal;
    void accept(Visitor *m_visitor) override;
};

#endif // DOG_H
