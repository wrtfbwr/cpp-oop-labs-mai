#include <iostream>
#include <string>
#include "vowels.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << lab01::CountVowels(input);
    return 0;
}
