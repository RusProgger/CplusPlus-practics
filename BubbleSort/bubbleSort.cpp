#include <iostream>

int main() {

    // Пузырьковая сортировка

    int allocateNumber {};
    // Спрашиваем у пользователя сколько байтов памяти он хочет выделить для массива
    std::cout << "How much memory do you want to allocate in bytes? ";
    std::cin >> allocateNumber;

    int* allocateNumber_p = new int[allocateNumber];
    
    // проверка если память выделилась
    try {
        int* allocateNumber_p = new int[allocateNumber];
    } catch (std::bad_alloc& e) {
        std::cout << "Error! Memory not allocated: " << e.what() << std::endl;
        return 1;
    }

    for(int i = 0; i < allocateNumber; i++) {
    std::cin >> allocateNumber_p[i];
    }
    

    delete[] allocateNumber_p;

    return 0;
}