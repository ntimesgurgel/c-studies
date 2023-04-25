#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> read_file(){

    std::ifstream file;
    file.open("words.txt");
    if(file.is_open()){
        int number_of_words;
        file >> number_of_words;

        std::vector<std::string> words;

        for(int i=0 ; i< number_of_words ; i++){
            std::string word;
            file >> word;
            words.push_back(word);
        }

        file.close();

        return words;
    } else {
        std::cerr << "It wasn't possible to open the file" << std::endl;
        exit(0);
    }
}