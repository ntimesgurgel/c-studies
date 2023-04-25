#include "give_guess.hpp"

inline char give_guess(){
    std::cout << std::endl << "Say your guess" << std::endl;
        char guess;
        std::cin >> guess;
        guess = toupper(guess);
        return guess;
}