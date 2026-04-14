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

    std::cout << "Enter number: ";

    int number = print<int>();

    std::cout << "Enter world: ";
    std::string world = print<std::string>();

    

    // std::cin >> value;
    // auto result = print(value);


    return 0;
}