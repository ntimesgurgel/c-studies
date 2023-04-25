#include <iostream>
#include <optional>
#include "Account/Account.hpp"
#include "Account/Owner.hpp"
#include "Account/Employee.hpp"
#include "Account/Id.hpp"
#include "Account/SavingsAccount.hpp"
#include "Account/CurrencyAccount.hpp"
#include "Account/WeekDay.hpp"

using namespace std;

void showBalance(const Account& account){
    cout << "The balance of the account is: " << account.getValue() << endl;
}

void withdrawl(Account& account){
    auto result = account.withdrawl(200);
    
    if(auto balance = get_if<float>(&result)){
        cout << "New account's balance:" << std::get<float>(result) << endl;
    } else {
        std::get<Account::withdrawlResult>(result);
    }
}

optional<string> readFileAsString(string& filePath){

}

ostream& operator<<(ostream& cout, const Account& account){
    Person owner = account.owner;
    cout << "O saldo da conta é: " << account.getValue() << endl;
    cout << "O titular da conta é " << owner.getName() << endl;
    return cout;
}

template<typename Type>
Type Less(Type a, Type b){
    return a < b ? a : b;
}

int main(){
    Owner owner(Id("123.456.789-10"), "Nathan", "password");
    SavingsAccount savings("123456", owner);
    savings.deposit(500);

    Owner owner2(Id("123.456.789-10"), "Rayanne", "password2");
    SavingsAccount savings2("123456", owner2);
    (Account&) savings2 += 300;

    CurrencyAccount savings3("546321", owner2);

    cout << Less<Account&>(savings, savings2);
    
}