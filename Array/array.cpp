#include <iostream>



int main() {

    const int n = 8;

    float a[n] = { 100, 200, 440, 51, 96, 29, 47, 153 };
    
    for(int i = 0; i < n; i++) {
        std::cout << a[i] << std::endl;
    }

    return 0;
}