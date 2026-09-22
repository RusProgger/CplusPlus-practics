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

    // Вывод массива 

    std::print("\n--------------- Вывод ---------------\n");

    for(int i = 0; i < n; i++) {
        std::print("Вывод элемента массива {}: \n", arrs[i]);
    }

    std::print("\n--------------- Вывод массива от последнего элемента к первому элементу ---------------\n");

    for(int i = n - 1; i >= 0; i--) {
        std::print("Вывод элемента массива {}: \n", arrs[i]);
    }

    delete[] arrs;
    arrs = nullptr;

    std::cin.ignore(); 
    std::cin.get();      
    return 0;
}

