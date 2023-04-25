#include <string>
#include <map>

inline bool is_word_guessed(
    const std::string& secret_word,
    const std::map<char, bool>& got_right
    )
{

    for(char character : secret_word){
        if(
            got_right.find(character) != got_right.end() 
            ||
            !got_right.at(character)
        ) return false;
        
    }
    return true;
}