#include <iostream>
#include <string>
#include "mainClassBank.h"
#include <server.h>

class User {
    // определяем класс
    public:
        std::string name;
        int age;

        // выводим информацию 

        void dataInfo() {
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
    userInfo.dataInfo();

    std::cout << "--------------- Info Bank ---------------" << std::endl;

    bankinfo.nameUser = "Denis";
    bankinfo.balanceUser = 5455.32;

    // вывод информации

    /*
    std::cout << "Name: " << bankinfo.name << std::endl;
    std::cout << "Balance: " << bankinfo.balance << " grn " << std::endl;
    */

    bankinfo.InfoBank();


    return 0;
}