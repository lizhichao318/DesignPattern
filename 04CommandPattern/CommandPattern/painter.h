#ifndef PAINTER_H
#define PAINTER_H
#include <iostream>
using namespace std;

class Painter
{
public:
    Painter(){}
    void drawLine()
    {
        cout << "��һ����"<<endl;
    }
    void drawRectangle()
    {
        cout << "��һ������"<<endl;
    }
    void drawCircle()
    {
        cout << "��һ��Բ��"<<endl;
    }
};

#endif // PAINTER_H
