#include <iostream>
#include <vector>

int main() {

    int numberInput {0};
    std::cout << "Enter Input number: ";

    std::cin >> numberInput;

    // Проверка если пользователь введет 0 или меньше

    if(std::cin.fail() || numberInput <= 0) {
        std::cout << "Error!! Please enter a positive number.";
        return 1;
    }

    // Реализация вектора
    std::vector<int> numberVector(numberInput);
    
    // Запрашиваем ввод 
    std::cout << "input number: ";
    for(int i = 0; i < numberInput; i++) {
        std::cin >> numberVector[i];
    }

    // Реализация вывода
    std::cout << "You entered:";
    for(int i = 0; i < numberInput; i++) {
        std::cout << numberVector[i] << std::endl;
    }



    return 0;
}