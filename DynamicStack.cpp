#include "DynamicStack.h"
#include <stdexcept>

template <typename T>
DynamicStack<T>::DynamicStack() : stack(nullptr), top(-1), capacity(0) {}

template <typename T>
DynamicStack<T>::~DynamicStack() {
    delete[] stack;
}

template <typename T>
bool DynamicStack<T>::isEmpty() const {
    return top == -1;
}

template <typename T>
void DynamicStack<T>::push(const T& value) {
    if (isEmpty()) {
        // якщо стек порожн≥й, створюЇмо новий динам≥чний масив
        stack = new T[1];
        capacity = 1;
    }
    else if (top + 1 == capacity) {
        // якщо немаЇ в≥льного м≥сц€, зб≥льшуЇмо розм≥р масиву
        T* newStack = new T[2 * capacity];
        for (int i = 0; i <= top; ++i) {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
        capacity *= 2;
    }
    stack[++top] = value;
}

template <typename T>
T DynamicStack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return stack[top--];
}

template <typename T>
int DynamicStack<T>::size() const {
    return top + 1;
}

template <typename T>
void DynamicStack<T>::clear() {
    delete[] stack;
    stack = nullptr;
    top = -1;
    capacity = 0;
}

template <typename T>
T DynamicStack<T>::topElement() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return stack[top];
}

template <typename U>
std::ostream& operator<<(std::ostream& os, const DynamicStack<U>& stack) {
    os << "Stack content: ";
    for (int i = stack.top; i >= 0; --i) {
        os << stack.stack[i] << " ";
    }
    return os;
}