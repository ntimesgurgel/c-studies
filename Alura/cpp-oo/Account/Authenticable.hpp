#pragma once
#include <string>

class Authenticable
{
    private:
        std::string password;
    public:
        Authenticable(std::string password);
        bool auth(std::string password) const;
};