#include <iostream>

// Условия задачи

/*

Делимость на 2, 3 и 5

Программа считывает 1 целое число. Если это число делится без остатка на 2, 3 и 5, то программа должна вывести "yes", иначе "no".

*/

int main() {
    
    int number;
    std::cin >> number;
    
    // условия 
    
    if(number % 2 == 0 && number % 3 == 0 && number % 5 == 0) {
        std::cout << "yes";
    } 

    else {
        std::cout << "no";
    }

    return 0;     
}