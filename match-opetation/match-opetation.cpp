#include <iostream>
#include <vector>

int main() {

    std::string h = "Hello";
    std::string t = h;

    t += ", world!";
    std::cout << h << std::endl;
    std::cout << t << std::endl;
    std::cout << std::endl;
    std::cout << "***********************************" << std::endl;

    // Vector

    std::vector<std::string> m = { "a", "b", "c", "d", "i"};

    std::vector<std::string> v;

    v = m;

    v[0] = "d";
    std::cout << m[0] << m[1] << std::endl;
    std::cout << v[0] << v[1] << std::endl;

}

