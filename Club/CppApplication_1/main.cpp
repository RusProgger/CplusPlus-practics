#include <iostream>
#include <string>
#include <locale.h>


int main() {
    
    // Установка локализации 

    // Первый способ подключения
    std::locale::global(std::locale());
    // второй способ подключения
    setlocale(LC_ALL, "");

    // создаем переменную с типом string
    
    std::wstring name;

    // Просим пользователя ввести имя:
    std::wcout << L"Введите ваше имя: ";
    
    // Выводим имя: 
    getline(std::wcin, name);
    
    
    
    
    
    return 0;
}
