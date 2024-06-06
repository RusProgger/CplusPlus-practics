#include <iostream>
#include <algorithm>
#include <vector>
#include <locale>


int main() {
    
    std::locale::global(std::locale(""));
    
    std::vector<int> numbers; // Создаем пустой вектор
    
    int size;
    std::cout << "Введите размер вектора: ";
    std::cin >> size;

    // Запрашиваем значения у пользователя и добавляем их в вектор
    for (int i = 0; i < size; ++i) {
        int value;
        std::cout << "Введите значение для элемента " << i << ": ";
        std::cin >> value;
        numbers.push_back(value);
    }
    
    // Сортируем вектор
    std::sort(numbers.begin(), numbers.end());

    // Выводим отсортированный вектор
    std::cout << "Отсортированный вектор: " << std::endl;
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << "Индекс: " << i << ", Значение: " << numbers[i] << std::endl;
    }
    
    
    
    return 0;
}