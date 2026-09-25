#include <iostream>
#include <print>
#include <string>


/*

std::stoi("123");       // string → int
std::stol("123");       // string → long
std::stoll("123");      // string → long long

std::stof("3.14");      // string → float
std::stod("3.14");      // string → double
std::stold("3.14");     // string → long double


*/

int main() {

    std::string number {"100"};

    // string to int 

    int number_int = std::stoi(number);

    std::print("Output: {}", number_int + 5);

    return 0;

}