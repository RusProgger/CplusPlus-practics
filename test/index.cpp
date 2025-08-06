#include <iostream> 
#include <string>
// #include <locale>

void Menu() {
    std::cout << "--- Menu profile ---" << std::endl;
    std::cout << "--- Game version 1.001 ---" << std::endl;
    std::cout << "--- Donat: 635119374463228191119 ---" << std::endl;
    std::cout << "--- Exit - 0: ---" << std::endl;
}

int main() {
//    std::locale::global(std::locale("Russian"));
   std::string name;
   int password;
   // Enter user 
   std::cout << "Enter username: ";
   std::cin >> name;
   // Enter password
   std::cout << "Enter password: ";
   std::cin >> password;

   if(name != "Alex" && password != 8871) {
       std::cout << "Error\n";
   } else {
        std::cout << "Entered\n";
        Menu();
   }

   return 0;
}