#include <iostream>
#include <thread>
#include <chrono>

int main() {

     int time {0};
    std::cout << "Input number: ";
    std::cin >> time;
    
    if(time < 0) {
        std::cout << "Error. Minimum enter number 1" << std::endl;
    } else {

        for(int i = time; i >= 1; i--) {
            std::cout << "Timer: " << i << "   \r" << std::flush;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        std::cout << "Timer over!";
    }

    return 0;
}