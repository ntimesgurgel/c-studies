#pragma
#include "Account.hpp"

class CurrencyAccount final: public Account
{
public:
    CurrencyAccount(std::string number, Owner ownwer);
    float withdrawlTax() const override;
    void transfer(Account& account, float withdrawlValue);
    void operator +=(CurrencyAccount& currencyAccount);
};
