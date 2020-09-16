#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H
#include "singlepatterntemplate.h"
#include "iostream"
using namespace std;

class ExampleClass:public SinglePatternTemplate<ExampleClass>
{
    friend SinglePatternTemplate<ExampleClass>;
public:
    ~ExampleClass(){}
    ExampleClass(const ExampleClass &) = delete ;
    ExampleClass & operator=(const ExampleClass &) = delete ;
    void show()
    {
        cout << "123"<<endl;
    }
private:
    ExampleClass(){}
};

#endif // EXAMPLECLASS_H
