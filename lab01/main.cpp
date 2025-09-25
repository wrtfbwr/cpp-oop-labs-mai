#include <iostream>
#include <string>
#include "vowel_counter.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << lab01::CountVowels(input) << std::endl;
    return 0;
}