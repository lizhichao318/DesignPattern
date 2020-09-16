#ifndef SINGLEPATTERNTEMPLATE_H
#define SINGLEPATTERNTEMPLATE_H

template < typename T>
class SinglePatternTemplate
{
public:
    virtual ~SinglePatternTemplate() {}
    SinglePatternTemplate(const SinglePatternTemplate &) = delete ;
    SinglePatternTemplate & operator=(const SinglePatternTemplate &) = delete ;

    static T& getSingleObj()
    {
        static T obj;
        return  obj;
    }
protected:
    SinglePatternTemplate(){};//构造函数定义为 protected
};

#endif // SINGLEPATTERNTEMPLATE_H
