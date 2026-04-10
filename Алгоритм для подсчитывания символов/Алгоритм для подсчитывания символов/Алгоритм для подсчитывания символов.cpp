#include <iostream>
#include <string>

// Локализация 

void Locale() {
    setlocale(LC_ALL, "Russian");
}

int main() {

    Locale();

    std::string _str;

    std::cout << "Введите строку: ";
    std::getline(std::cin, _str);

    


    
    return 0;
}

