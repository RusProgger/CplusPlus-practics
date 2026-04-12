#include <iostream>

template <typename T>
    void print(T value) {
        std::cout << value << "\n";
    }


int main() {

    print("Hello");
    std::cin.get();
    return 0;
}