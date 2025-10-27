#include <iostream>
#include <string>

// создаем структуру пользователей. 

struct Person {
    std::string name; // Имя 
    int date_of_birth; // Дата рождения

    // Характеристики
    float weight; // вес
    float height; // рост
    int age; // возраст
    std::string color_eye; // цвет глаз
    
    // местоположение

    std::string city_user;
};

// создаем функцию для определения возраста.

bool isAdult(const Person& p) {

    if(p.age >= 18) {
        return true;
    } else {
        return false;
    }
}


int main() {

    // обьявляем структуру

    

    return 0;
}