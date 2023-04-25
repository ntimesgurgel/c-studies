#include <iostream>
#include "print_word.hpp"

inline void print_word(const std::string& secret_word, std::map<char, bool>& got_right){
    
    for(char character : secret_word){
            if(got_right[character]){
                std::cout << character << " ";
            } else {
                std::cout << "_" << " ";
            }
        }
    
    std::cout << std::endl;
}