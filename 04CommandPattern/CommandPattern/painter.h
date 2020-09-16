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
        cout << "画一条线"<<endl;
    }
    void drawRectangle()
    {
        cout << "画一个矩形"<<endl;
    }
    void drawCircle()
    {
        cout << "画一个圆形"<<endl;
    }
};

#endif // PAINTER_H
