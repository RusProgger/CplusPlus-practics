#include <iostream>
#include <vector>

int main() {

    int numberInput {0};
    std::cout << "Enter Input number: ";

    std::cin >> numberInput;

    // Проверка если пользователь введет 0 или меньше

    if(std::cin.fail() || numberInput <= 0) {
        std::cout << "Error!! Please number min 1.";
        return 1;
    }

    // Реализация вектора
    std::vector<int> numberVector(numberInput);




    return 0;
}