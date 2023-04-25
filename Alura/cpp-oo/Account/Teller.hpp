#pragma once
#include "Employee.hpp"
#include "WeekDay.hpp"

class Teller final : public Employee
{
    public:
        Teller(Id id, std::string name, float salary, WeekDay payDay);
        float bonus() const;
};