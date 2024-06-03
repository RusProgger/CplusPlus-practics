#include <cstdlib>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>
#include <locale.h>
#include <cctype>


int main() {
    // Локализация 
    std::locale::global(std::locale("ru_RU.UTF-8"));
    
    std::wcout << L"Добро пожаловать в игру лотарею: " << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1700));
    std::wcout << L"Правила игры: " << std::endl;
    // c помощью многопоточности выводим: 
    
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    
    std::wcout << L"1 - Нужно вести ваше имя: " << std::endl;
    std::wcout << L"2 - Загадать число: " << std::endl;
    std::wcout << L"3 - Программа выведет результаты: " << std::endl;
    
    std::wstring name;
    
   // просим пользователя ввести имя, если оно пустое то продолжаем цикл
    
    do {
        
    std::wcout << L"Как тебя зовут? ";
    std::getline(std::wcin, name);
    
    // проверка если имя пустое то:
    if(name.empty()) {
        std::wcout << L"Имя не может быть пустым\n";
    }
    
    }while(name.empty());
    
    
    
    // Проверяем условие на наличие цифр в имени
    
    bool has_digits = false;
    for(wchar_t ch: name) {
        if(std::isalpha(ch) ==0) {
            has_digits = true;
            break;
        }
    }
    
    // Проверяем если у имени есть хоть одна цифра попросим пользователя ввести имя заного:
    
    while(has_digits) {
        std::wcout << L"Ошибка: имя должно содержать только буквы.\n";
        std::wcout << L"Пожалуйста введите имя еще раз: ";
        std::getline(std::wcin, name);
        
        has_digits = false;
        
        for(wchar_t ch : name) {
            if(std::isalpha(ch)== 0) {
                has_digits = true;
                break;
            }
        }
    }
    
    // c помощью многопоточности выводим: 
    
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
   
    // Выводим вводимые данные в name;
    
    
    std::random_device rd;  // Источник случайной энтропии (может не быть доступным на всех платформах)
    std::mt19937 gen(rd()); // Используем Mersenne Twister 19937 в качестве генератора
    std::uniform_int_distribution<int> dis(1, 100); // Равномерное распределение от 1 до 100 (включительно)

    // Генерация случайных чисел
    int random_number = dis(gen);
    if(random_number == 55 || random_number == 10) {
        std::wcout << L"Привет " << name << L" твой номер " <<  random_number << L" ты выиграл!" << std::endl;
    } else {
        std::wcout << L"Привет " << name << L" твой номер " <<  random_number << L" и ты проиграл!" << std::endl;
    }
    
   
    
    return 0;
}

