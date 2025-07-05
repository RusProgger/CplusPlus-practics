#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {

    // Создаем вектор

    std::vector<int> age{1, 5, 10, 55, 14, 11, 82};

    // цикл 
    std::cout << "Cортировка до: ";

    std::for_each(std::begin(age), std::end(age), [](int count) {
        std::cout << count << " ";
    });


    // Сортировка вектора

    std::sort(age.begin(), age.end());

    std::cout << std::endl;

    std::cout << "Cортировка после: ";
    
    std::for_each(std::begin(age), std::end(age), [](int count) {
        std::cout << count << " ";
    });

}