
#include <iostream>

int main()
{

    setlocale(LC_ALL, "Russian");
    int a;
    int b;
    std::cout << "Введите начало диапазона:\n";
    std::cin >> a;
    std::cout << "Введите конец диапазона:\n";
    std::cin >> b;
    int sum = 0;
    do {
        if (a % 2 != 0) {
            sum += a;
        }
        a++;
    } while (a <= b);
    std::cout << "Сумма нечетных чисел из диапазона:\n";
    std::cout << sum;
}

