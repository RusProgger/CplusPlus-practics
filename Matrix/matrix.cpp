#include <iostream>
#include <string>
#include <windows.h>

void locale() {

    SetConsoleCP(1251);        
    SetConsoleOutputCP(1251); 

}

int main() {
    locale();
    std::cout << "Введите размер строки матрицы: ";

    return 0;
}