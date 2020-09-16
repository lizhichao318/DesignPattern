#ifndef COMPUTERBUILDER_H
#define COMPUTERBUILDER_H
#include <string>
#include "computer.h"
using namespace std;

class ComputerBuilder
{
public:
    ComputerBuilder():m_computer(new  Computer()){}
    virtual ~ComputerBuilder(){}
    virtual void buildCpu() = 0;
    virtual void buildDisk() = 0;
    virtual void buildMainBoard() = 0;
    virtual void buildDisplay() = 0;
    virtual void buildRam() = 0;
    virtual void buildSystem() = 0;
    virtual Computer *getComputer() = 0;
protected:
    Computer *m_computer;
};

#endif // COMPUTERBUILDER_H
