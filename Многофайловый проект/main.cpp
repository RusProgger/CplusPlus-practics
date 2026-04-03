#include <iostream>
#include <thread>
#include <chrono>
#include "food.h"

int main() {

    char letterInput;
    std::cout << "Enter symbol: ";
    std::cin >> letterInput;

    std::cout << FoodForToday(letterInput);

    // Задержка ввода
    std::cin.get();
    return 0;
}