cmake_minimum_required(VERSION 3.24)
project(cpp_oo)

set(CMAKE_CXX_STANDARD 14)

include_directories(Account)

add_executable(cpp_oo
        Account/Account.cpp
        Account/Account.hpp
        Account/Employee.cpp
        Account/Employee.hpp
        Account/Id.cpp
        Account/Id.hpp
        Account/Owner.cpp
        Account/Owner.hpp
        Account/Person.cpp
        Account/Person.hpp
        main.cpp 
        Account/SavingsAccount.cpp 
        Account/SavingsAccount.hpp 
        Account/CurrencyAccount.cpp 
        Account/CurrencyAccount.hpp)
