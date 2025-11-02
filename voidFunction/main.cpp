#include <iostream>

void numberInt(int n) {
    std::cout << "Number: " << n << std::endl;
}

void numberInt(float n) {
    std::cout << "Number float: " << n << std::endl;
}

void numberInt(double n) {
    std::cout << "Number double: " << n << std::endl;
}

void numberInt(std::string n) {
    std::cout << "String: " << n << std::endl;
}


int main() {

    numberInt(100);


    return 0;
}