#include <iostream> 
#include <string>
// #include <locale>

int main() {
//    std::locale::global(std::locale("Russian"));
   std::string name;
   int password;
   std::cin >> name;
   std::cin >> password;

   if(name != "Alex" && password != 8871) {
        for(int count = 3; count > 3; count--) {
            std::cout << count << " Попытка - неверные данные. повторите.\n";
        }
   }
}