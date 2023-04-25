#include "SavingsAccount.hpp"
#include <iostream>

SavingsAccount::SavingsAccount(std::string number, Owner owner): Account(number, owner) {}

float SavingsAccount::withdrawlTax() const{
    return 0.02;
}