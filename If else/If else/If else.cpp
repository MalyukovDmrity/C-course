
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число с клавиатуры:\n";
    int num;
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Число четное\n";
    }
    else {
        std::cout << "Число нечетное\n";
    }

}

