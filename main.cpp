#include <iostream>

class MyClass
{
    int m_value;
public:
    MyClass(int value) : m_value(value) {} // Конструктор класса
    int getValue() { return m_value; } // Метод класса для получения значения
};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}