#include <iostream>
#include <print>
#include <new>

void locale() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}


int main() {

    // Locale

    locale();

    int n {}; // Размер массива
    std::print("Введите размер массива: ");
    std::cin >> n;

    int *arrs = nullptr;

    // проверка выведилась ли память

    try {
        arrs = new int[n];
    } catch (const std::bad_alloc&) {
        std::print("Не удалось выделить память!\n");
    }


    std::cin.get();
    return 0;
}

