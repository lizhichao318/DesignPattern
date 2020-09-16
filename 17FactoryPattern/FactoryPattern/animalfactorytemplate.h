#ifndef ANIMALFACTORYTEMPLATE_H
#define ANIMALFACTORYTEMPLATE_H

template<typename A>
class AnimalFactoryTemplate
{
public:
    AnimalFactoryTemplate(){};
    virtual ~AnimalFactoryTemplate() {}
    virtual A * CreateAnimal() = 0;
};

#endif // ANIMALFACTORYTEMPLATE_H
