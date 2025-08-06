#include <iostream> 
#include <string>
#include <thread>
#include <chrono>

void Menu() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << "--- Menu profile ---" << std::endl;
    std::cout << "--- Game version 1.001 ---" << std::endl;
    std::cout << "--- Donat: 635119374463228191119 ---" << std::endl;
    std::cout << "--- Exit input 0: ---" << std::endl;
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

   if(name == "Alex" && password == 8871) {
       std::cout << "Entered\n";
       std::thread menu_end(Menu);
       menu_end.join();
   } else {
       std::cout << "Error\n";
   }

   return 0;
}