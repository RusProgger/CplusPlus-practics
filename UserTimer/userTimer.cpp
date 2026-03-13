#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int userInputTime {0};
    std::cout << "Input number timer: ";
    std::cin >> userInputTime;

    if(userInputTime <= 0) {
        std::cout << "Error. Minimum number 1. ";    
        return 0;
    }

    for(int timer = userInputTime; timer >= 1; timer--) {
        std::cout << "Timer start: " << timer << "  \r" << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "Timer end! ";


    return 0;
}