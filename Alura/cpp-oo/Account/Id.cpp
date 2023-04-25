#include "Id.hpp"
#include <iostream>

Id::Id(std:: string number): number(number)
{
    std::cout << "Id created" << std::endl;
}

std::string Id::getNumber() const 
{
    return number;
}