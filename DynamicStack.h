#ifndef DYNAMIC_STACK_H
#define DYNAMIC_STACK_H

#include <iostream>

template <typename T>
class DynamicStack {
private:
    T* stack; // Динамічний масив
    int top;  // Індекс вершини стеку
    int capacity; // Поточна ємність стеку

public:
    DynamicStack(); // Конструктор
    ~DynamicStack(); // Деструктор
    bool isEmpty() const; // Перевірка, чи стек порожній
    void push(const T& value); // Додавання елементу в стек
    T pop(); // Видалення верхнього елементу зі стеку
    int size() const; // Отримання розміру стеку
    void clear(); // Очищення стеку
    T topElement() const; // Отримання верхнього елементу стеку
};

// Перевантаження оператора виведення
template <typename T>
std::ostream& operator<<(std::ostream& os, const DynamicStack<T>& stack);

#include "DynamicStack.cpp"

#endif // DYNAMIC_STACK_H