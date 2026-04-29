#include <windows.h>
#include <format>
#include <string>
#include <iostream>

int main() {

    std::string user {};
    std::cout << "Enter userName: ";
    std::cin >> user;

    std::string msg = std::format("Hello {}", user);

    MessageBoxA(NULL, msg.c_str(), "Window", MB_OK);

    return 0;
}