#include "BracketChecker.h"

BracketChecker::BracketChecker(const std::string& str) : input(str) {}

bool BracketChecker::checkBrackets() {
    std::stack<char> bracketStack;

    for (char ch : input) {
        if (ch == '(' || ch == '[' || ch == '{') {
            bracketStack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (bracketStack.empty()) {
                // Немає відкриваючої дужки для поточної закриваючої
                return false;
            }

            char openBracket = bracketStack.top();
            bracketStack.pop();

            if ((ch == ')' && openBracket != '(') ||
                (ch == ']' && openBracket != '[') ||
                (ch == '}' && openBracket != '{')) {
                // Неправильна відповідність відкриваючої і закриваючої дужок
                return false;
            }
        }
    }

    // Перевірка, чи не залишилися незакриті дужки
    return bracketStack.empty();
}