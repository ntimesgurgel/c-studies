#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <ctime>
#include "functions/char_exists/char_exists.cpp"
#include "functions/select_difficulty/select_difficulty.cpp"
#include "functions/print_wrong_tries/print_wrong_tries.cpp"
#include "functions/print_word/print_word.cpp"
#include "functions/title.hpp"
#include "functions/select_word/select_word.cpp"
#include "functions/give_guess/give_guess.cpp"
#include "functions/is_word_guessed/is_word_guessed.cpp"
#include "functions/is_hanged/is_hanged.cpp"
using namespace std;

int main(){
    
    string secret_word = select_word();
    map<char, bool> got_right;
    vector<char> got_wrong;

    bool hanged = false;
    bool guessed = false;

    title();

    int tries = select_difficulty();

    while(!hanged && !guessed){
        print_word(secret_word, got_right);
        print_wrong_tries(got_wrong);

        char guess = give_guess();
        bool right_guess = char_exists(guess, secret_word);

        if(right_guess){
            cout << "Your guess was correct!" << endl << endl;
            got_right[guess] = true;
        } else{
            cout << "Your guess was wrong!" << endl;
            tries --;
            got_wrong.push_back(guess);
        }

        hanged = is_hanged(tries);
        guessed = is_word_guessed(secret_word, got_right);
        system("clear");
    }
}