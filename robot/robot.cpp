#include <iostream>

int main() {
    int numberRobot;
    std::cin >> numberRobot;
    
    while(numberRobot != 0) {
        std::cout << "Работаю" << std::endl;
        std::cin >> numberRobot;
    }
    
    std::cout << "Ура, Добби свободен!";
}