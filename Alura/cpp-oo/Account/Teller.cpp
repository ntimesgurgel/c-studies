#include "Teller.hpp"

Teller::Teller(Id id, std::string name, float salary, WeekDay payDay):
    Employee(id, name, salary, payDay)
{}

float Teller::bonus() const
{   
    return getSalary() * 0.1;
}