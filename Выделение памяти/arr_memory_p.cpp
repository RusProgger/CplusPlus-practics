#include <iostream>
#include <vector>

int main() {
    const int arrMax = 5; 

    // выделение памяти под массив на 5 елементов.

    int* arr = new int[arrMax];

    for(int i = 0; i < arrMax; i++) {
        std::cin >> arr[i];
    }

    std::cout << "------------------------" << "\n";

    for(int i = 0; i < arrMax; i++) {
        std::cout << "Вывод массива: " << arr[i] << std::endl;
    }

    
    

    // создание вектора с типом string

    std::vector<std::string> name {"Alex", "Dmitriy", "Ivan", "Kirill", "Denis"};

   for (const std::string& a : name) {
        std::cout << "Имя: " << a << std::endl;

         for(int i = 0; i < arrMax; i++) {
            std::cout  << "  Число: " << arr[i] << std::endl;
        }
    }

    delete[] arr;
    arr = nullptr;

    std::cin.get();
    return 0;
}