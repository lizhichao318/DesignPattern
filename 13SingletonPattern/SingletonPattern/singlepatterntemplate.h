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
    SinglePatternTemplate(){};//���캯������Ϊ protected
};

#endif // SINGLEPATTERNTEMPLATE_H
