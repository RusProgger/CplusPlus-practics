#include <cstdlib>
#include <iostream>


int main() {

    int a = 5;
    int *b = new int;
    b = &a;
    
    std::cout << *b << std::endl;
    std::cout << &b << std::endl;
    
    delete b; // Освобождаем память
    b = nullptr;
    
    return 0;
}

