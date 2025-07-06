#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {

    // Создаем вектор

    std::vector<int> age{1, 5, 10, 55, 14, 11, 82};

    std::vector<std::string> name{"Alice", "Julia", "Ivan", "Kesi", "Ruslan", "Clown", "Hacker"};


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

    std::cout << std::endl;
    std::cout << "---------------------" << std::endl;

     std::cout << "Cортировка до: ";

     std::for_each(std::begin(name), std::end(name), [](std::string name_count) {
        std::cout << name_count << " ";
     });

     std::cin.get();

     return 0;

}
