// Подключаем файл printBox.h - он для нашей функции
#include "printBox.h"

#include <iostream>

// String для работы со строками

#include <string>

void printBox(const std::string& title, unsigned short width) {
    std::cout << std::string(width, '*') << '\n';

    int paddingLines = 2;
    for (int i = 0; i < paddingLines; ++i)
        std::cout << "*" << std::string(width - 2, ' ') << "*" << '\n';

    int titlePadding = (width - 2 - title.size()) / 2;
    std::cout << "*"
        << std::string(titlePadding, ' ')
        << title
        << std::string(width - 2 - titlePadding - title.size(), ' ')
        << "*" << '\n';

    for (int i = 0; i < paddingLines; ++i)
        std::cout << "*" << std::string(width - 2, ' ') << "*" << '\n';

    std::cout << std::string(width, '*') << '\n';
}
