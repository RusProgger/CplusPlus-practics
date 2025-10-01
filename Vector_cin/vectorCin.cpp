#include <iostream>
#include <vector>

int main() {

    int numberVector;
    std::cout << "Enter vector size: ";
    std::cin >> numberVector;

    std::vector <int> v(numberVector);

    for(int i = 0; i < numberVector; i++) {
        std::cout << "Enter vector number: ";
        std::cin >> v[i];
    }


    for(int j = 0; j < numberVector; j++) {
        std::cout << "Number element vector: " << j << " = " << v[j] << std::endl; 
    }

    std::cout << "Count vector: " << numberVector << std::endl;



    return 0;
}