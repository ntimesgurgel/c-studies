#include "is_hanged.hpp"

inline bool is_hanged(const int& tries){
    if(tries == 0){
        return true;
    }
    return false;
}