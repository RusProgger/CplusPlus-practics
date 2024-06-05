#include <iostream>






int main() {
    // Подключаем локализацию
    std::locale::global(std::locale(""));

    std::cout << "Курс валют" << std::endl;
    std::cout << "Выберите валюту: " << std::endl;
    std::cout << "1 - Доллар" << std::endl;
    std::cout << "2 - Евро " << std::endl;
    std::cout << "0 - Выйти из программы " << std::endl;

    // cоздаем переменные для ввода

    int symbol;

    std::cout << "Выберите действие: ";

    do {
        std::cin >> symbol;

        switch(symbol) {
            case 1: {
                std::cout << "Dollars" << std::endl;
                break;
            }
            case 2: {
                std::cout << "Euro" << std::endl;
                break;
            }

            default:
                if(symbol != 0) {
                    std::cout << "Некоректный ввод" << std::endl;
                }
                break;
        }

        // Очистка буфера
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    } while(symbol != 0);



    return 0;
}
