#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int width;
    int height;
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;
    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> height;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            std::cout << "*";
            
        }
        std::cout << "\n";
    }
}


