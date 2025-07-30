#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;

    // меняем первый и последний символы
    char res = num[0];
    num[0] = num[4];
    num[4] = res;

    std::cout << num << std::endl;
    std::cin.get();
    return 0;
}
