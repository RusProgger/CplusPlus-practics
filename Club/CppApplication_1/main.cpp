#include <iostream>
#include <string>
#include <locale.h>


int main() {
    
    // Установка локализации 
    
    std::locale::global(std::locale());
    setlocale(LC_ALL, "");

    // создаем переменную с типом string
    
    std::wstring name;
    
    std::wcout << L"Введите ваше имя: ";
    
    getline(std::wcin, name);
    
    
    
    
    
    return 0;
}
