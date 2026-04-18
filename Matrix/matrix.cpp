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

    return 0;
}