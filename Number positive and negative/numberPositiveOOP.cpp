#include <iostream>

/*
    Подсчет положительных и отрицательных чисел 
    Программа считывает последовательность целых чисел, заканчивающуюся нулем. Программа должна подсчитать и вывести на экран количество положительных и отрицательных чисел в введенной последовательности. Ноль при подсчете учитывать не нужно.
*/

class NumberCounter {
private:
    // создаем переменную для позитивного числа
    int positiveCount; 
    // создаем переменную для негатитввного числа
    int negativeCount;

public:
    NumberCounter() : positiveCount(0), negativeCount(0) {}

    // функция с уловием если число положительное или отрицательное: 
    void addNumber(int num) {
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    // получаем результат позитивного числа 
    int getPositiveCount() const {
        return positiveCount;
    }
    
    
    // получаем результат негативного числа 
    int getNegativeCount() const {
        return negativeCount;
    }

    // функция для вывода 
    void printResult() const {
        std::cout << "Положительных: " << positiveCount << std::endl;
        std::cout << "Отрицательных: " << negativeCount << std::endl;
    }
};

int main() {
    NumberCounter counter;
    int num;
    
    while (true) {
        std::cin >> num;
        if (num == 0) break;

        counter.addNumber(num);
    }

    counter.printResult();

    return 0;
}