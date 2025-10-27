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

    Person ivan = {"Ivan", 1990,  72.3, 175, 20, "green", "Volga"};
    Person roma = {"Roman", 1988,  71.9, 178, 31, "green", "Tikva"};
    Person vania = {"Ivan", 1970,  81.3, 181.1, 50, "grey", "Kipr"};
    Person artem = {"Ivan", 2005,  72.3, 175, 15, "green", "Moskov"};

    // вывод структуры

    // std::cout << "-----------------------------" << std::endl;
    // if(!isAdult(ivan)) {
    //     std::cout << " is Adult" << std::endl;
    // } else {
    //     std::cout << " Adult" << std::endl;
    // }

    
    std::cout << "Name: " << ivan.name << "\nDate of birth: " << ivan.date_of_birth << "\nWeight: " << ivan.weight << "\nHeight: " << ivan.height << "\nAge: " << ivan.age << "\nColor eye: " << ivan.color_eye << "\nCity: " << ivan.city_user << "\n";

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Name: " << roma.name << "\nDate of birth: " << roma.date_of_birth << "\nWeight: " << roma.weight << "\nHeight: " << roma.height << "\nAge: " << roma.age << "\nColor eye: " << roma.color_eye << "\nCity: " << roma.city_user << "\n";

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Name: " << vania.name << "\nDate of birth: " << vania.date_of_birth << "\nWeight: " << vania.weight << "\nHeight: " << vania.height << "\nAge: " << vania.age << "\nColor eye: " << vania.color_eye << "\nCity: " << vania.city_user << "\n";

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Name: " << artem.name << "\nDate of birth: " << artem.date_of_birth << "\nWeight: " << artem.weight << "\nHeight: " << artem.height << "\nAge: " << artem.age << "\nColor eye: " << artem.color_eye << "\nCity: " << artem.city_user << "\n";


    std::cin.get(); // для задержки экрана
    return 0;
}