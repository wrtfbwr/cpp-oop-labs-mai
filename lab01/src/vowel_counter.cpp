#include "vowel_counter.h"

namespace lab01 {

std::size_t CountVowels(const std::string& str) {
    std::size_t count = 0;
    
    for (char c : str) {
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
    }
    
    return count;
}

}