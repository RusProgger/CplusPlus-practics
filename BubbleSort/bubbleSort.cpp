#include <iostream>

int main() {

    int allocateNumber {};
    // Спрашиваем у пользователя сколько байтов памяти он хочет выделить для массива
    std::cout << "How much memory do you want to allocate in bytes? ";
    std::cin >> allocateNumber;

    int* allocateNumber_p = nullptr;
    
    // проверка если память выделилась
    try {
        int* allocateNumber_p = new int[allocateNumber];
    } catch (std::bad_alloc& e) {
        std::cout << "Error! Memory not allocated: " << e.what() << std::endl;
        return 1;
    }

    // Просим пользователя ввести данные 
    for(int i = 0; i < allocateNumber; i++) {
        std::cout << "Enter array element: ";
        std::cin >> allocateNumber_p[i];
    }
    
        // Пузырьковая сортировка
    for(int i = 0; i < allocateNumber; i++) {
        for(int j = 0; j < allocateNumber - i - 1; j++) {
            if(allocateNumber_p[j] > allocateNumber_p[j + 1]) {
                // создаем переменную
                int count_arr = allocateNumber_p[j];
                allocateNumber_p[j] = allocateNumber_p[j + 1];
                allocateNumber_p[j + 1] = count_arr;
            }
        }
    }

    // вывод отсортированного массива

    std::cout << "Sorted array: ";
    for(int i = 0; i < allocateNumber; i++) {
        std::cout << allocateNumber_p[i] << " ";
    }

    std::cout << std::endl;

    delete[] allocateNumber_p;

    return 0;
}