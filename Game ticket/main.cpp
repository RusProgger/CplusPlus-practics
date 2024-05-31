#include <cstdlib>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>

int main() {
    // Локализация 
    std::locale::global(std::locale());
    
    
    std::string name;
    
    std::cout << "Как тебя зовут? ";
    std::cin >> name;
    
    // c помощью многопоточности выводим: 
    
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
   
    // Выводим вводимые данные в name;
    
    std::cout << name << std::endl;
    
    std::random_device rd;  // Источник случайной энтропии (может не быть доступным на всех платформах)
    std::mt19937 gen(rd()); // Используем Mersenne Twister 19937 в качестве генератора
    std::uniform_int_distribution<int> dis(1, 100); // Равномерное распределение от 1 до 6 (включительно)

    // Генерация случайных чисел
    
    int random_number = dis(gen);
    std::cout << "Привет " << name << " твой код " <<  random_number << std::endl;
    
    return 0;
}

