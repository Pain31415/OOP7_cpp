#include "Stack.h"

template <typename T, int MAX_SIZE>
Stack<T, MAX_SIZE>::Stack() : top(-1) {}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isEmpty() const {
    return top == -1;
}

template <typename T, int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isFull() const {
    return top == MAX_SIZE - 1;
}

template <typename T, int MAX_SIZE>
void Stack<T, MAX_SIZE>::push(const T& value) {
    if (!isFull()) {
        stack[++top] = value;
    }
}

template <typename T, int MAX_SIZE>
T Stack<T, MAX_SIZE>::pop() {
    if (!isEmpty()) {
        return stack[top--];
    }
    return T(); // Повернення значення за замовчуванням в разі порожнього стеку
}

template <typename T, int MAX_SIZE>
int Stack<T, MAX_SIZE>::size() const {
    return top + 1;
}

template <typename T, int MAX_SIZE>
void Stack<T, MAX_SIZE>::clear() {
    top = -1;
}

template <typename T, int MAX_SIZE>
T Stack<T, MAX_SIZE>::topElement() const {
    if (!isEmpty()) {
        return stack[top];
    }
    return T(); // Повернення значення за замовчуванням в разі порожнього стеку
}

template <typename U, int S>
std::ostream& operator<<(std::ostream& os, const Stack<U, S>& stack) {
    os << "Stack content: ";
    for (int i = stack.top; i >= 0; --i) {
        os << stack.stack[i] << " ";
    }
    return os;
}