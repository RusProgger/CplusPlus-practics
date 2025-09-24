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

    Bank bankinfo;
    // заполняем поля 

    userInfo.name = "Alex";
    userInfo.age = 30;

    // вывод информации
    userInfo.funct();

    std::cout << "--------------- Info Bank ---------------" << std::endl;

    bankinfo.name = "Denis";
    bankinfo.balance = 5455.32;

    // вывод информации

    std::cout << "Name: " << bankinfo.name << std::endl;
    std::cout << "Balance: " << bankinfo.balance << "grn " << std::endl;

    return 0;
}