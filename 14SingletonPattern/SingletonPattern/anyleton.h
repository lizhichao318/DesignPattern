#ifndef ANYLETON_H
#define ANYLETON_H


class Anyleton
{
public:
    class TooManyObj{};
    ~Anyleton()
    {
        --curObjCount;
    }
    static const int maxObjCount = 2;
    static int curObjCount ;
    static Anyleton * getAnyleton()
    {
        return  new Anyleton();
    }
    static Anyleton *getAnyleton( const Anyleton & obj)
    {
        return  new Anyleton(obj);
    }
private:
    Anyleton()
    {
        if( curObjCount >= maxObjCount )
            throw TooManyObj();
         ++curObjCount;
    }
    Anyleton(const Anyleton &)
    {
        if( curObjCount >= maxObjCount )
            throw TooManyObj();
         ++curObjCount;
    }
};

#endif // ANYLETON_H
