#include <iostream>
#include <print>

void locale() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}



int main() {

    // Locale

    locale();

    std::cin.get();
    return 0;
}

