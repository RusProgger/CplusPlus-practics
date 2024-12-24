// match-opetation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {

    std::string h = "Hello";
    std::string t = h;

    t += ", world!";
    std::cout << t << std::endl;
}

