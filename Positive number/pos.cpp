#include <iostream>

int main() {
    
    int x;

    std::cout << "Enter number: ";
    std::cin >> x;

    if(x >= 1) {

        int summ = 0;
        while(x > 0) {
            summ += x;
            --x;
        }

        std::cout << summ;

    } else {
        std::cout << "Please enter positive  number";
    }

    std::cin.get();
    return 0;
}