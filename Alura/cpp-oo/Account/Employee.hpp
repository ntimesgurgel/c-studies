#pragma once
#include "Person.hpp"
#include "Id.hpp"
#include "WeekDay.hpp"
#include <string>

class Employee: public Person<Id>
{
    private:
        float salary;
        short int payDay;

    public:
        Employee(Id id, std::string name, float salary, WeekDay payDay);
        std::string getName();
        float getSalary() const;
        virtual float bonus() const = 0;
};