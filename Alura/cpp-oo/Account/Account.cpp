#pragma once
#include <iostream>
#include <utility>
#include "Account.hpp"

int Account::numberOfAccounts=0;

Account::Account(std::string number, Owner owner):
    number(std::move(number)),
    owner(owner),
    value(0)
{
    numberOfAccounts++;
}

Account::~Account()
{
    numberOfAccounts--;
}

std::variant<Account::withdrawlResult, float> Account::withdrawl(float valueWithdrawl)
{
    if(valueWithdrawl < 0){
        std::cout << "Can't withdrawl negative value" << std::endl;
        return Account::NegativeValue;
    }

    float taxWithdrawl = valueWithdrawl * withdrawlTax();
    float totalWithdrawl = valueWithdrawl + taxWithdrawl;

    if(totalWithdrawl < value){
        std::cout << "Insufficient value in account" << std::endl;
        return Account::InsufficientValue;
    }

    this->value -= totalWithdrawl;
    return this->value;
}

void Account::deposit(float valueDeposit)
{
    if (valueDeposit < 0){
        std::cout << "Can't deposit negative value" << std::endl;
        return;
    }

    value += valueDeposit;
}

float Account::getValue() const
{
    return value;
}

void Account::operator+=(float valueDeposit){
    return deposit(valueDeposit);
}

int Account::getNumberOfAccounts()
{
    return numberOfAccounts;
}

bool Account::operator<(const Account& account){
    return this->value < account.value;
}