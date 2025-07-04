#include <iostream>

class MyClass
{
public:
    MyClass() // Конструктор класса по умолчанию
    {
        std::cout << "MyClass constructor called" << std::endl;
    }
    ~MyClass() // Деструктор класса
    {
        std::cout << "MyClass destructor called" << std::endl;
    }
    MyClass(const MyClass& other) // Конструктор копирования
    {
        std::cout << "MyClass copy constructor called" << std::endl;
    }
    MyClass& operator=(const MyClass& other) // Оператор присваивания
    {
        std::cout << "MyClass assignment operator called" << std::endl;
        return *this;
    }
    MyClass(MyClass&& other) // Конструктор перемещения
    {
        std::cout << "MyClass move constructor called" << std::endl;
    }
    MyClass& operator=(MyClass&& other) // Оператор перемещения
    {
        std::cout << "MyClass move assignment operator called" << std::endl;
        return *this;
    }
    MyClass(int value) // Конструктор с параметрами
    {
        std::cout << "MyClass constructor with parameters called" << std::endl;
    }
    MyClass(int value, int value2) // Конструктор с параметрами
    {
        std::cout << "MyClass constructor with parameters called" << std::endl;
    }
};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}