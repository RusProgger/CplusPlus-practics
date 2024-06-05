#include <iostream>
#include <string>
#include <locale.h>


int main() {
    
    // locale 
    
    std::locale::global(std::locale());
    setlocale(LC_ALL, "");
    
    std::wstring name;
    
    std::wcout << L"Введите ваше имя: ";
    
    getline(std::wcin, name);
    
    
    
    
    
    return 0;
}