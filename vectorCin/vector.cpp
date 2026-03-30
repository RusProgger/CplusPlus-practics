#include <iostream>
#include <vector>
#include <algorithm>


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
    for(int i = 0; i < numberInput; i++) {
        std::cout << "input number " << i << ": ";
        std::cin >> numberVector[i];
    }

    // Реализация вывода

    std::cout << std::endl;

    std::cout << "-------------------------\n";

    std::cout << "\nYou entered:\n";
    for(int i = 0; i < numberInput; i++) {
        std::cout << "Vector " << i << ": " << numberVector[i] << std::endl;
    }


    // Реализация сортировки

    sort(numberVector.begin(), numberVector.end());


    std::cout << "\n ------------- Sort vector:  --------------\n";

    // Вывод сортированного вектора

    for(auto i : numberVector) {
        std::cout << "Sort vector: " << i << std::endl; 
    }

    std::cout << "\n";

    // задержка консоли
    std::cin.get();
    return 0;
}