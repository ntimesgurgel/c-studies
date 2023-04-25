#include "char_exists.hpp"

inline bool char_exists(const char& guess,const std::string& secret_word){

    for (char character : secret_word){
        if(guess == character){
            return true;
        }
    }

    return false;
}