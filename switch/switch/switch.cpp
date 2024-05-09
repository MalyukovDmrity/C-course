#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int c;
    float a;
    float b;
    std::cout << "Введите 2 числа с клавиатуры:\n";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Выберите математическую операцию:\n";
    std::cout << "1.Сложение\n";
    std::cout << "2.Вычитание\n";
    std::cout << "3.Умножение\n";
    std::cout << "4.Деление\n";
    std::cin >> c;
    switch (c) {
    case 1:
        std::cout << "Cумма чисел: " << a + b << std::endl;
        break;
    case 2:
        std::cout << "Разность чисел: " << a - b << std::endl;
        break;
    case 3:
        std::cout << "Произведение чисел: " << a * b << std::endl;
        break;
    case 4:
        std::cout << "Частное чисел : " << a / b << std::endl;
        break;
    default:
        std::cout << "Такой операции нет" << std::endl;
        break;
    }

}