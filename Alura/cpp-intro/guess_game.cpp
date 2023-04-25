#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){
    std::cout << "*************************************" << endl <<
            "******* Welcome to guess game *******" << endl <<
            "*************************************" << endl;

    int challenge;
    int guess_chances;

    do{
        std::cout << "Choose your difficult" << endl;
        std::cout << "Easy (1), Normal (2), Hard (3)" << endl;
        cin >> challenge;

        switch (challenge){
            case 1:
                guess_chances = 15;
                break;
            case 2:
                guess_chances = 10;
                break;
            case 3:
                guess_chances = 5;
                break;
            default:
                std::cout << "choose a valid option" << endl; 
                
        }
    }while(challenge!=1 && challenge!=2 && challenge!=3);

    srand(time(NULL));
    const int secret_number = rand() % 100;

    double guess;
    bool right_guess, guess_greater, guess_lesser;
    int guess_try;
    double pontos = 1000.0;

    for(guess_try = 1; guess_try<guess_chances; guess_try++){
        std::cout << "Try " << guess_try << endl << "Say your guess" << endl;
        cin >> guess;

        right_guess = secret_number == guess;
        guess_greater = secret_number < guess;
        guess_lesser = secret_number > guess;

        if(right_guess){
            cout << "Well done! You guessed right!" << endl;
            break;
        }
        
        if(guess_greater){
            cout << "Your guess was greater than the secret number" << endl;  
        }

        if(guess_lesser){
            cout << "Your guess was lesser than the secret number" << endl;
        }

        pontos -= abs(secret_number - guess)/2.0;
    }

    std::cout.precision(2);
    std::cout << fixed;
    std::cout << "sua pontuação foi de " << pontos << " pontos." << endl;
    
}