#include <iostream>
#include <string>
#include <locale.h>


int main() {
    
    // Установка локализации 

    // Первый способ подключения локализации
    std::locale::global(std::locale());
    // второй способ подключения локализации
    setlocale(LC_ALL, "");

    std::wstring name;

    // Просим пользователя ввести имя:
    std::wcout << L"Введите ваше имя: ";
    
    // Выводим имя: 
    getline(std::wcin, name);
    
    // Задержка 
    
    std::cin.get();
    
    return 0;
}
