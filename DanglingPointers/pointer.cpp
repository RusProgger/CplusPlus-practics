#include <iostream>

int main() {

    int number {10};

    // Input number 

    std::cout << "Input variable = " << number << "\n";

    // pointer number 

    int* number_pt = &number;

    // Input pointer number 

    std::cout << "Adress: " << &number_pt << "\n";

    std::cout << "Pointer value: " << *number_pt << "\n";


    // memor

    std::cin.get();
    return 0;
}