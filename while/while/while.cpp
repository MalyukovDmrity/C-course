
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int count;
    std::cout << "Введите количество символов:\n";
    std::cin >> count;
    char el;
    std::cout << "Введите символ:\n";
    std::cin >> el;
    int value;
    std::cout << "Введите как будут располагаться символы вертикально == 1/горизонтально == 2:\n";
    std::cin >> value;
    int i = 1;
    std::cout << "Решение задачи выглядит след образом:\n";
    while (i <= count) {
        if (value == 2) {
            std::cout << el;
            i++;
        }
        else if (value == 1) {
            std::cout << el <<std::endl;
            i++;
        }
        else {
            std::cout << "Вы ввели неправильный способ вывода символа";
            break;
        }
    }



}
