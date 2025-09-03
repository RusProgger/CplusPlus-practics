// Подключаем библиотеку для ввода вывода 
#include <iostream>
// Подключаем библиотеку для работы с временем
#include <chrono>
// Подключаем библиотеку для работы с многопоточностью
#include <thread>
// Подключаем библиотеку для работы с векторами
#include <vector>
// Подключаем библиотеку для работы со строками
#include <string>
// Подключаем файл для работы со цветами
#include "colors.h";



int main() {

    std::locale::global(std::locale(""));

    int number;

    std::cout << GREEN << "Привет!\n" << RESET;

    // Выводим id потока
    
    std::cout << RED "Номер данного потока: " RESET;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << YELLOW << std::this_thread::get_id() << RESET << std::endl;
    
    // Ожидание 1.5 секунды после запуска
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));

    std::cout << "Cколько чисел вы хотите ввести: ";

    // ввод целочисленных чисел
    std::cin >> number;

    std::vector<int> n(number);

    // Заполняем вектор числами

    for (int i = 0; i < number; i++) {
        std::cout <<  "Введите число " << i << ":  ";
        std::cin >> n[i];
        
    }

    // Найдем минимальное число

    int min_result = std::numeric_limits<int>::max();

    for (int num : n) {
        if (num < min_result) {
            min_result = num;
        }
    }

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << GREEN << "Найменьшее число ";
    std::cout << RED << min_result << RESET;

    return 0;
}
    

