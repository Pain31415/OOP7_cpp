#include <iostream>
#include "BracketChecker.h"

int main() {
    std::string inputString;

    // Введення рядка з консолі
    std::cout << "Enter a string with brackets: ";
    std::getline(std::cin, inputString);

    BracketChecker bracketChecker(inputString);

    // Перевірка та виведення результату
    if (bracketChecker.checkBrackets()) {
        std::cout << "The brackets are placed correctly.\n";
    }
    else {
        std::cout << "Error: Incorrect placement of brackets.\n";
    }

    return 0;
}