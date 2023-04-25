#include "Employee.hpp"

Employee::Employee(Id id, std::string name, float salary, short int payDay): 
    Person(id, name),salary(salary),payDay(payDay)
{

};