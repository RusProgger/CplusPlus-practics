#include <iostream>

constexpr int Square(int number) { return number*number;}

int main() {
    
    const int ARRAY_LENGTH = 5;
    
    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};
    
    // Использование constexpr для массива из 25 целых чисел
    
    int moreNumbers[Square(ARRAY_LENGTH)];
    
    std::cout << "Введите индекс изменяемого элемента: ";
    int elementIndex = 0;
    std::cin >> elementIndex;
    
    std::cout << "Введите новое значение: ";
    int newValue = 0;
    
    std::cin >> newValue;
    
    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;
    
    
    std::cout << "Элемент " << elementIndex << " MyNumber равен: ";
    std::cout <<  myNumbers[elementIndex];
    
    return 0;
}