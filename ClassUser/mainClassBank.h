#ifndef BANK_H
#define BANK_H

#include <string>
#include <iostream>

// создаем класс

class Bank {
    public:
        std::string nameUser;
        double balanceUser;

        void InfoBank() {
            std::cout << "Name: " << nameUser << std::endl;
            std::cout << "Balance: " << balanceUser << " grn " << std::endl;
        }
};


#endif

