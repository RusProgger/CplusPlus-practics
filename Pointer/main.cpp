#include <cstdlib>
#include <iostream>


int main() {

    int a = 5;
    int *b = new int;
    b = &a;
    
    std::cout << *b << std::endl;
    
    delete b;
    return 0;
}

