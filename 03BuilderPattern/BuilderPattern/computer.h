#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include <iostream>
using namespace std;

class Computer
{
public:
    Computer(){}
    void setCpu(const string &m_cpu)
    {
        cpu = m_cpu;
    }
    void setDisk(const string &m_disk)
    {
        disk = m_disk;
    }
    void setMainBoard(const string &m_mainboard)
    {
        mainBoard = m_mainboard;
    }
    void setDisplay(const string &m_display)
    {
        display = m_display;
    }
    void setRam(const string &m_ram)
    {
        ram = m_ram;
    }
    void setSystem(const string &m_system)
    {
        system = m_system;
    }
    void showCopmtuter()
    {
        cout<<"主板:"<<mainBoard<<",CPU:"<<cpu<<",内存:"<<ram<<",硬盘:"<<disk<<",显示器:"<<display<<",操作系统:"<<system<<endl;
    }
private:
    string mainBoard;
    string cpu;
    string disk;
    string display;
    string ram;
    string system;
};

#endif // COMPUTER_H
