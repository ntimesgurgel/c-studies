#pragma once
#include "Employee.hpp"
#include "Authenticable.hpp"
#include "WeekDay.hpp"

class Manager final : public Employee, public Authenticable
{
    public:
        Manager(Id id, std::string name, float salary, std::string password, WeekDay payDay);
        float bonus() const;
};