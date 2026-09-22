#include <iostream>
#include <print>
#include <new>
#include <windows.h>

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

    // проверка на корректность ввода числа

    if(n <= 0) {
        std::print("Ввод числа должен быть положительным!\n");
        return 1;
    }

    int *arrs = nullptr;

    // проверка выведилась ли память

    try {
        arrs = new int[n];
    } catch (const std::bad_alloc&) {
        std::print("Не удалось выделить память!\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        std::print("Введите элемент массива {}: ", i);
        int arrs_user;
        std::cin >> arrs_user;
        arrs[i] = arrs_user;
    }

    std::cin.get();
    return 0;
}

