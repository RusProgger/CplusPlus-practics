#include <iostream>
#include <thread>
#include <chrono>
#include "colors.h";

template <typename T>
 T add(T a, T b) {
     return a + b;
}

int main() {

    std::locale::global(std::locale(""));

    int result_int = add(20, 15);

    double result_double = add(1.7, 2.5);
    std::cout << "Подождите, идет подсчет результатов..." << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << RED << "Это переменная 1 = " << result_double << RESET << std::endl;
    std::cout << GREEN << "Это переменная 2 = " << result_int << RESET << std::endl;

}