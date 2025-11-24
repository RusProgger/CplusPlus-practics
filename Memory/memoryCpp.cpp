#include <iostream>

int main() {

//    int* num = new int;
//    *num = 100;
//    std::cout << *num << std::endl;

    
//     delete num;
    
    // очищаем висячий указатель

    // num = nullptr;

    std::string* strings = new std::string[5];

    // цикл

    for(int i = 0; i < 5; i++) {
        strings[i] = "Hello";
    }

    for(int i = 0; i < 5; i++) {
        std::cout << strings[i] << std::endl;
    }

    // Освобождаем память

    delete[] strings;

    // Очищаем указатель

    strings = nullptr;
    return 0;
}