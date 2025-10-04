#include <iostream> 
#include <vector>
#include <algorithm>

int main() {

    int number;
    std::vector <int> numberEnter;

    std::cout << "Enter number: ";
    std::cin >> number;

    for(int i = 0; i < number; i++) {
        int var; 
        std::cout << "Number: ";
        std::cin >> var;
        numberEnter.push_back(var);
    }

    // не отсортированный вектор

    for(int j = 0; j < number; j++) {
        std::cout << "Vector " << j << " = " << numberEnter[j] << "\n";
    }

    // отсортированный вектор

    std::cout << std::endl;
    std::cout << std::endl;

    std::sort(numberEnter.begin(), numberEnter.end());

     for(int j = 0; j < number; j++) {
        std::cout << "Vector " << j << " = " << numberEnter[j] << "\n";
    }

    std::cin.get();
    return 0;
}


