#pragma once
#include "Account.hpp"

class SavingsAccount final : public Account{

public:
    SavingsAccount(std::string number, Owner owner);
    float withdrawlTax() const override;
};