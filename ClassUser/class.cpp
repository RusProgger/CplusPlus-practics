#include <iostream>
#include <string>
#include "mainClassBank.h"

class User {
    // определяем класс
    public:
        std::string name;
        int age;

        // выводим информацию 

        void funct() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
        }
};


int main() {

    // Создаем обьект класса для класса User
    User userInfo;

    // Cоздаем обьект класса для класса Bank

    // заполняем поля 

    userInfo.name = "Alex";
    userInfo.age = 30;

    // вывод информации
    userInfo.funct();

    return 0;
}