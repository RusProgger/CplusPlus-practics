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

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < collum; j++) {
        std::cout << "Введите значение матрицы [" 
                  << i + 1 << "][" << j + 1 << "]: ";
        std::cin >> matrix[i * collum + j];
    }
}


    // Output matrix message 

    std::cout << "------- Output matrix: -------" << "\n";

    // loop output

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collum; j++) {
            std::cout << matrix[i * collum + j] << " ";
        }
        std::cout << "\n";
    }


    // deallocate memory
    delete[] matrix;

    // message pause

    std::cout << "Press any key to exit..." << "\n";

    // clear buffer
    std::cin.ignore();
    // pause
    std::cin.get();
    return 0;
}