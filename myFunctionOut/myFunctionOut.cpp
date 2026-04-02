#include <iostream>
#include <string>


void printOut(const std::string& text, const std::string& name) {
    std::string out = text;
    size_t pos = out.find("{name}");

    if (pos != std::string::npos) {

        out.replace(pos, 6, name);
    }

    std::cout << out << std::endl;
}



int main() {
    std::string name = "Alice";

    std::string text = "{name}";
    printOut(text, name); 

    std::cin.get(); // задержка консоли

    return 0;
}