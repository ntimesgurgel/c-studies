#include "CurrencyAccount.hpp"
#include <iostream>

CurrencyAccount::CurrencyAccount(std::string number, Owner owner): Account(number, owner) 
{}

float CurrencyAccount::withdrawlTax() const {
    return 0.05;
}

void CurrencyAccount::transfer(Account& account, float withdrawlValue) {
    auto result = withdrawl(withdrawlValue);

    if(auto balance = std::get_if<float>(&result)){
        this->withdrawl(withdrawlValue);
        account.deposit(withdrawlValue);
    }
}

void CurrencyAccount::operator+=(CurrencyAccount& originAccount){
    originAccount.transfer(*this, originAccount.getValue() / 2);
}