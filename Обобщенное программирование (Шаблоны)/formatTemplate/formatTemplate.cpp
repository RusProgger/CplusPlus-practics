#include <iostream>
#include <format>
#include <string>

template <typename T>
T print() {
    T value;
    std::cin >> value;
    return value;
}

int main() {

    std::cout << "Enter word: ";

    // std::cin >> value;
    // auto result = print(value);


    return 0;
}