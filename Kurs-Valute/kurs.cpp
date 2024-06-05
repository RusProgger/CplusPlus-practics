#include <iostream>
#include <locale>

// Константы для значений меню
const int DOLLAR_OPTION = 1;
const int EURO_OPTION = 2;
const int EXIT_OPTION = 0;

// Функция для вывода меню
void printMenu() {
    std::cout << "Курс валют" << std::endl;
    std::cout << "Выберите валюту: " << std::endl;
    std::cout << DOLLAR_OPTION << " - Доллар" << std::endl;
    std::cout << EURO_OPTION << " - Евро " << std::endl;
    std::cout << EXIT_OPTION << " - Выйти из программы " << std::endl;
}

// Функция для обработки ввода //
void handleInput(int symbol) {
    switch(symbol) {
        case DOLLAR_OPTION:
            std::cout << "Dollars" << std::endl;
            break;
        case EURO_OPTION:
            std::cout << "Euro" << std::endl;
            break;
        default:
            if(symbol != EXIT_OPTION) {
                std::cout << "Некорректный ввод" << std::endl;
            }
            break;
    }
}

int main() {
    // Подключаем локализацию
    std::locale::global(std::locale(""));

    int symbol;

    do {
        printMenu();
        std::cout << "Выберите действие: ";
        std::cin >> symbol;

        handleInput(symbol);

        // Очистка буфера
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while(symbol != EXIT_OPTION);

    return 0;
}