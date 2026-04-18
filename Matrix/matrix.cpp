#include <iostream>
#include <string>
#include <windows.h>

void locale() {
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
}

int main() {
    locale();

    int row {};
    int collum {};
    std::cout << "Введите размер строки матрицы: ";
    std::cin >> row;
    std::cout << "Введите размер колонки матрицы: ";
    std::cin >> collum;

    // We allocate memory for the matrix”

    int* matrix = new int[row * collum];

    // loop

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collum; j++) {
            std::cout << "Введите значения матрицы " << j + 1 << ": ";
            std::cin >> matrix[i * collum + j];
        }
    }

    // loop output

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collum; j++) {
            std::cout << matrix[i * collum + j] << " ";
        }
        std::cout << "\n";
    }


    // pause
    std::cin.get();
    return 0;
}