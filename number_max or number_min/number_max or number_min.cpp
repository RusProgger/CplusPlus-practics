#include <iostream>


int main() {
    
    int numberA, numberB;
    std::cin >> numberA >> numberB;
    
    if(numberA > numberB) {
        std::cout << numberA;
    }
    else if(numberA == numberB) {
        std::cout << "числа равны";
    }
    else {
        std::cout << numberB;
    }
    
    
    
    
    

}