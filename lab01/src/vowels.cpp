#include "vowels.h"
#include <array>

namespace lab01 {

std::size_t CountVowels(const std::string& s) {
    static constexpr std::array<char, 6> vowels = {'a','e','i','o','u','y'};
    std::size_t cnt = 0;
    for (char ch : s) {
        if (ch == ' ') continue;
        for (char v : vowels) {
            if (ch == v) { ++cnt; break; }
        }
    }
    return cnt;
}

}
