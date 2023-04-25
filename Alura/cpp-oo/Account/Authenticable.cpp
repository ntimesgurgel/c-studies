#include "Authenticable.hpp"

Authenticable::Authenticable(std::string password): password(password)
{}

bool Authenticable::auth(std::string password) const
{
    return password == this->password;
}