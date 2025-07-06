#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>


int main() {

    std::locale::global(std::locale(""));

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

    std::cout << std::endl;
    std::cout << "***********************************" << std::endl;

    std::vector<std::string> user = {"Вася", "Петя", "Николай", "Юрий", "Прайс"};

    std::for_each(user.begin(), user.end(), [](std::string i) {
        std::cout << "Имя: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    });

    std::cout << std::endl;
    std::cout << "***********************************" << std::endl;

    return 0;

}

