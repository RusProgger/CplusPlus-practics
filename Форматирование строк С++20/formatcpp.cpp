#include <iostream>
#include <format>
#include <string>


int main() {

    std::string text = "Hello";

    std::cout << std::format("{}, this is a formatted string in C++20.", text);

    return 0;
}