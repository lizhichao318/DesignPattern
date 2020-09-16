#ifndef ANYLETONTEMPLE_H
#define ANYLETONTEMPLE_H

template <typename T>
class AnyletonTemple
{
public:
    class TooMantObj{};
    static int getCurObjCount(){ return curObjCount ;}
protected:
     AnyletonTemple()
     {
         init();
     }
     AnyletonTemple(const AnyletonTemple &)
     {
         init();
     }
     ~AnyletonTemple()
     {
         --curObjCount;
     }
private:
     static const int maxObjCount ;
     static int curObjCount;
     void init()
     {
         if( curObjCount >= maxObjCount )
             throw TooMantObj();
         ++curObjCount;
     }
};

#endif // ANYLETONTEMPLE_H
