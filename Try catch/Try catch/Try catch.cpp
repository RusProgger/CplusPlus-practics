// Try catch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {

    setlocale(LC_ALL, "RU");
    try {
        int age = 8;

        if (age >= 18) {
            std::cout << "Успешно!" << std::endl;
        }

        else {
            throw(age);
        }
    }
    catch (int MyNumber) {
        std::cout << "Ошибка!!" << std::endl;
    }

    return 0;

}

