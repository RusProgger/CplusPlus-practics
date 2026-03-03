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


    // memory heap 

    int* num_ptr = new int(2000);
    std::cout << "Heap: " << *num_ptr << "\n";


    delete num_ptr;
    num_ptr = nullptr;

    

    std::cin.get();
    return 0;
}