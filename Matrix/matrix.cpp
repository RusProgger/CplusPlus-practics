#include <iostream>
#include <string>
#include <windows.h>

void locale() {

    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

}

int main() {
    locale();
    std::cout << "Введите размер строки матрицы: ";



    return 0;
}