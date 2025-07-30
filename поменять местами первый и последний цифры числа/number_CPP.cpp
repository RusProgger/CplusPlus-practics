#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;

    // меняем первый и последний символы
    char temp = num[0];
    num[0] = num[4];
    num[4] = temp;

    std::cout << num << std::endl;

    return 0;
}
