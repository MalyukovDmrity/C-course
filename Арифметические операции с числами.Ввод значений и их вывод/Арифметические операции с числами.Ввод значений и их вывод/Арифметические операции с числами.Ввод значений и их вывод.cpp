
#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значения переменных\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Вы ввели следующие числа:\n";
    std::cout << "a=" << a<<std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    std::cout << "Значение суммы введенных чисел:\n";
    int sum;
    sum = a + b + c;
    std::cout << "sum=" << sum << std::endl;
    std::cout << "Значение произведения введенных чисел:\n";
    int multiplication;
    multiplication = a * b * c;
    std::cout << "multiplication=" << multiplication << std::endl;
    std::cout << "Среднее значение:\n";
    float avg;
    avg = (a + b + c) / 3.0;
    std::cout << "avg=" << avg << std::endl;
    


 

}
