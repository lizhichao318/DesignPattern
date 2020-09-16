#ifndef COMPUTERBUILDERONE_H
#define COMPUTERBUILDERONE_H
#include "computerbuilder.h"
//配方1
class ComputerBuilderOne : public ComputerBuilder
{
public:
    using ComputerBuilder::ComputerBuilder;
    void buildMainBoard() override
    {
        cout <<"建造主板"<<endl;
        m_computer->setMainBoard("华硕");
    }
    void buildCpu() override
    {
         cout <<"组装CPU"<<endl;
        m_computer->setCpu("intel");
    }
    void buildRam() override
    {
         cout <<"组装内层"<<endl;
        m_computer->setRam("16G");
    }
    void buildDisk() override
    {
         cout <<"组装硬盘"<<endl;
        m_computer->setDisk("500G固态硬盘");
    }
    void buildDisplay() override
    {
         cout <<"组装显示器"<<endl;
        m_computer->setDisplay("三星");
    }
    void buildSystem() override
    {
         cout <<"组装操作系统"<<endl;
        m_computer->setSystem("win10");
    }
    Computer * getComputer() override
    {
         cout <<"组装完成"<<endl;
        return  m_computer;
    }
};

#endif // COMPUTERBUILDERONE_H
