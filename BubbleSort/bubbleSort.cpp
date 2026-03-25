#include <iostream>

int main() {

    // Пузырьковая сортировка

    int allocateNumber {};
    // Спрашиваем у пользователя сколько байтов памяти он хочет выделить для массива
    std::cout << "How much memory do you want to allocate in bytes? ";
    std::cin >> allocateNumber;

    int* allocateNumber_p = new int[allocateNumber];
    
    // проверка если память выделилась
    if (allocateNumber_p == NULL) {
        std::cout << "Error! Memory not allocated." << std::endl;
        return 1;
    }

    
    

    delete[] allocateNumber_p;

    return 0;
}