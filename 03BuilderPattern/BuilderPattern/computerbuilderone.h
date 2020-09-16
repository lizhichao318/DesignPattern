#ifndef COMPUTERBUILDERONE_H
#define COMPUTERBUILDERONE_H
#include "computerbuilder.h"
//�䷽1
class ComputerBuilderOne : public ComputerBuilder
{
public:
    using ComputerBuilder::ComputerBuilder;
    void buildMainBoard() override
    {
        cout <<"��������"<<endl;
        m_computer->setMainBoard("��˶");
    }
    void buildCpu() override
    {
         cout <<"��װCPU"<<endl;
        m_computer->setCpu("intel");
    }
    void buildRam() override
    {
         cout <<"��װ�ڲ�"<<endl;
        m_computer->setRam("16G");
    }
    void buildDisk() override
    {
         cout <<"��װӲ��"<<endl;
        m_computer->setDisk("500G��̬Ӳ��");
    }
    void buildDisplay() override
    {
         cout <<"��װ��ʾ��"<<endl;
        m_computer->setDisplay("����");
    }
    void buildSystem() override
    {
         cout <<"��װ����ϵͳ"<<endl;
        m_computer->setSystem("win10");
    }
    Computer * getComputer() override
    {
         cout <<"��װ���"<<endl;
        return  m_computer;
    }
};

#endif // COMPUTERBUILDERONE_H
