#include <iostream>
#include "select_difficulty.hpp"

inline int select_difficulty(){

    int difficulty;
    int tries;

    do{
    std::cout << "Select the difficulty:" << std::endl
         << "Easy (1)" << std::endl
         << "Normal (2)" << std::endl
         << "Hard (3)" << std::endl;

    std::cin >> difficulty;

    switch (difficulty)
    {
        case 1:
            tries = 15;
            break;
        case 2:
            tries = 10;
            break;
        case 3:
            tries = 5;
            break;
        default:
            std::cout << "Wrong selection, try again" << std::endl << std::endl;
            break;
    }

    }while(difficulty != 1 && difficulty !=2 && difficulty !=3);

    return tries;
}