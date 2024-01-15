#ifndef BRACKET_CHECKER_H
#define BRACKET_CHECKER_H

#include <string>
#include <stack>

class BracketChecker {
private:
    std::string input;

public:
    BracketChecker(const std::string& str);
    bool checkBrackets(); // Перевірка коректності дужок
};

#endif // BRACKET_CHECKER_H