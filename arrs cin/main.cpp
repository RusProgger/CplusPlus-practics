#include <iostream>

int main() {

    double arrs[1000];
    int n; 
    double summaArray = 0.0;
    std::cout << "Enter array: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> arrs[i];
        summaArray += arrs[i];
    }

    std::cout << "Enter array summa = " << summaArray << std::endl;

    return 0;
}