#include "Owner.hpp"

Owner::Owner(Id id, std::string name, std::string password)
    :Person(id, name), Authenticable(password)
{

};