#pragma once
#include "Id.hpp"
#include <string>

template<typename Document>
class Person{
    protected:
        Document document;
        std::string name;
    
    public:
        Person::Person(Document document, std::string name): id(id), name(name){};
        std::string Person::getName() const
        {
            return this->name;
        }
    
};