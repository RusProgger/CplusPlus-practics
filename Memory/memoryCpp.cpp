#include <iostream>

int main() {

   int* num = new int;
   *num = 100;
   std::cout << *num << std::endl;

    
    delete num;
    
    // очищаем висячий указатель

    num = nullptr;
    return 0;
}