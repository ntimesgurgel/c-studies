#pragma once
#include <string>
#include <utility>
#include <variant>
#include "Owner.hpp"

class Account 
{
private:
    static int numberOfAccounts;

public:
    static int getNumberOfAccounts();
    
private: 
    std::string number;
    Owner owner;

protected:
    float value;

public:
    enum withdrawlResult{
        NegativeValue, InsufficientValue
    };
    Account(std::string number, Owner owner);
    virtual ~Account();
    std::variant<withdrawlResult, float> withdrawl(float withdrawlValue);
    void deposit(float valueDeposit);
    float getValue() const;
    void operator+=(float valueDeposit);
    bool operator<(const Account& account);
    virtual float withdrawlTax() const = 0;
    friend std::ostream& operator<<(std::ostream& cout, const Account& account);
};