#pragma once
#include <string>

class Id
{
    private:
        std::string number;
    
    public:
        explicit Id(std:: string number);
        std::string getNumber() const;
};