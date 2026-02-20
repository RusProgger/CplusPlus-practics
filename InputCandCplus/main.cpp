#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    int a = 10;
    float b = 1.4;
    double n = 14.767555667686;

    std::cout << "---------------------- C ----------------------\n";

    printf("%d\n", a);

    printf("%0.3f\n", b);

    printf("%.17g\n", n);

    // C++

    std::cout << "---------------------- C++ ----------------------\n";

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << std::setprecision(17) << (n - 2) << "\n";


    return 0;
}

