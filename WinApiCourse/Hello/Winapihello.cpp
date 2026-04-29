#include <windows.h>
#include <format>
#include <string>
#include <iostream>

int main() {

    std::string user {};
    std::cout << "Enter userName: ";
    std::cin >> user;

    std::string msg = std::format("Hello {}", user);

    Beep(500, 300);

    MessageBoxA(NULL, msg.c_str(), "Window", MB_OK);

    return 0;
}