#include <iostream> 
#include <string>
#include <locale.h>

int main() {
   std::locale::global(std::locale("Russian"));
   std::string name;
   int password;
   std::cin >> name;
   std::cin >> password;

   if(name != "Alex" && password != 8871) {

   }
}