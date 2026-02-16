#include <iostream>
#include <string>

// Перебор всех символов

int main() {

    std::string text;
    std::cout << "Enter text ";
    std::getline(std::cin, text);

    for(int i = 0; i < text.size(); i++) {
        std::cout << "'" << text[i] << "'";
    }

    return 0;
}