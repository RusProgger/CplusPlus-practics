#include <cstdlib>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>
#include <locale.h>


int main() {
    // Локализация 
    std::locale::global(std::locale("ru_RU.UTF-8"));
    
    // Создаем переменную с типом STRING 
    std::wstring name;
    
    std::wcout << L"Как тебя зовут? ";
    std::getline(std::wcin, name);
    
    // Задержка вывода на 900мс: 
    
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
   
    // Выводим вводимые данные в name;
    
    
    std::random_device rd;  // Источник случайной энтропии (может не быть доступным на всех платформах)
    std::mt19937 gen(rd()); // Используем Mersenne Twister 19937 в качестве генератора
    std::uniform_int_distribution<int> dis(1, 100); // Равномерное распределение от 1 до 100 (включительно)

    // Генерация случайных чисел
    int random_number = dis(gen);
    // Условие 
    if(random_number == 55) {
        std::wcout << L"Привет " << name << L" твой код " <<  random_number << L" ты выиграл!" << std::endl;
    } else {
        std::wcout << L"Привет " << name << L" твой код " <<  random_number << L" и ты проиграл!" << std::endl;
    }
    
   
    
    return 0;
}

