#include <iostream>
#include <string>

// Локализация 

void Locale() {
    setlocale(LC_ALL, "");
}

int main() {

    Locale();

    std::string _str{};

    size_t maxCount{};

    std::cout << "Введите строку: ";
    std::getline(std::cin, _str);

    // поиск символа

    char symbol{};
    std::cout << "Введите символ который вы хотите найти: ";
    std::cin >> symbol;

    // Реализация алгоритма 

    for (size_t i = 0; i < _str.size(); i++) {
        if (_str[i] == symbol) {
            maxCount += 1;
        }
    }

    std::cout << "По вашему запросу нашло: " << maxCount <<  " символа " << symbol;

    std::cin.get();
    
    return 0;
}

