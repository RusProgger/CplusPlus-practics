#include <iostream>
#include <string>

// Номер символа

int main() {

    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << "-------------- INT INPUT --------------\n";

    for(char symbol : text) {
        std::cout << symbol << "\t" << static_cast<int>(symbol) << "\n";
    }

    return 0;
}