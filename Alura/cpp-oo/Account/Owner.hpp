#pragma once
#include <string>
#include "Authenticable.hpp"
#include "Person.hpp"
#include "Id.hpp"

class Owner: public Person<Id>, public Authenticable
{
    public:
        Owner(Id id, std::string name, std::string password);
};