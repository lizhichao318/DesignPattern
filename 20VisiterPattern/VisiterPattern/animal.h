#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
class Visitor;
class Animal
{
public:
    Animal(const string &m_name):name(m_name){}
    string getName() const {return  name ;}
    virtual ~Animal(){}
    virtual void accept(Visitor *m_visitor) = 0;
protected:
    string name;
};

#endif // ANIMAL_H
