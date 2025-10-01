#include <iostream>
#include <vector>

int main() {

    int numberVector;
    std::vector <int> v {numberVector};

    std::cout << "Enter vector size: ";
    std::cin >> numberVector;

    for(int i = 0; i < numberVector; i++) {
        std::cout << "Enter vector number: ";
        std::cin >> v[i];
    }

    std::cout << ""; 



    return 0;
}