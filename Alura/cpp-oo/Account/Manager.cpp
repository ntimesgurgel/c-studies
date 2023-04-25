#include "Manager.hpp"

Manager::Manager(Id id, std::string name, float salary, std::string password, WeekDay payDay)
    : Employee(id, name, salary, payDay), Authenticable(password)
{}

float Manager::bonus() const
{
    return getSalary() * 0.5;
}