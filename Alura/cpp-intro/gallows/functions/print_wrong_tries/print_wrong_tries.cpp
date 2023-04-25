#include <iostream>
#include "print_wrong_tries.hpp"

inline void print_wrong_tries(const std::vector<char>& got_wrong){
    std::cout << std::endl << "WRONG TRIES: " << std::endl;
    for(char character : got_wrong){
        std::cout << character << " ";
    }

    std::cout << std::endl;
}