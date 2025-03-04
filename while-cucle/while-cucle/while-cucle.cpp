#include <iostream>
#include <iomanip>  

int main() {

    std::locale::global(std::locale(""));
   
    int width;

    std::cout << "Установите ширину таллицы: ";

    std::cin >> width;

    
    for (int i = 1; i <= 10; i++) {
        
        for (int j = 1; j <= 10; j++) {
           
            std::cout << std::setw(width) << i * j;

        }
        std::cout << std::endl;  
    }

    return 0;
}
