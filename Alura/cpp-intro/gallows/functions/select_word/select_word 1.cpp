#include <vector>
#include <ctime>
#include "../read_file/read_file.cpp"
#include "select_word.hpp"

std::string select_word(){
    std::vector<std::string> words = read_file();

    srand(time(NULL));

    int index = rand() % words.size();

    return words[index];
}