#ifndef STACK_H
#define STACK_H

#include <iostream>

template <typename T, int MAX_SIZE>
class Stack {
private:
    T stack[MAX_SIZE];
    int top;

public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(const T& value);
    T pop();
    int size() const;
    void clear();
    T topElement() const;
};

// Перевантаження оператора виведення
template <typename T, int MAX_SIZE>
std::ostream& operator<<(std::ostream& os, const Stack<T, MAX_SIZE>& stack);

#include "Stack.cpp"

#endif // STACK_H