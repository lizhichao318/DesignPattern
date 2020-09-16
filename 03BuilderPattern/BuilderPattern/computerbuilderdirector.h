#ifndef COMPUTERBUILDERDIRECTOR_H
#define COMPUTERBUILDERDIRECTOR_H
#include "computerbuilder.h"
#include <memory>

class ComputerBuilderDirector
{
public:
    ComputerBuilderDirector(shared_ptr<ComputerBuilder> m_builder):builder(m_builder){}
    Computer * constructComputer()
    {
        builder->buildMainBoard();
        builder->buildCpu();
        builder->buildRam();
        builder->buildDisk();
        builder->buildDisplay();
        builder->buildSystem();
        return builder->getComputer();
    }
    void setBuilder(shared_ptr<ComputerBuilder> m_builder)
    {
        builder = m_builder;
    }
private:
    shared_ptr<ComputerBuilder> builder;
};

#endif // COMPUTERBUILDERDIRECTOR_H
