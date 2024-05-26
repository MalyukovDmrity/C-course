#include <iostream>
#include <ctime>
int main()
{
    setlocale(LC_ALL, "Russian");
    int const SIZE = 10;
    int arr[SIZE];
    int arr_min = 100;
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 20;
        bool exists = false;
        for (int j = 0; j < i; ++j) {
            if (arr[j] == arr[i]) {
                exists = true;
                break;
            }
        }

        if (!exists) {
            arr[i] = arr[i];
        }
        else {
            --i; 
        }

    }
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << std::endl;
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < arr_min) {
            arr_min = arr[i];
        }
    }
    std::cout << "Минимальный элемент массива равен: " << arr_min;
    
}

