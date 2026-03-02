#include <iostream>
#include <string>
#include <thread>
#include <chrono>


void pauseWait(int sec) {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}

int main() {

    std::string value[] = {
        "Port testing: ",
        "Port testing bad: "
        "Port testing warning"
    };

    int countArr = sizeof(value) / sizeof(value[0]);

    for(int i = 0; i < countArr; i++) {
        for(int a = 0; a <= 100; a++) {
            std::cout << "\r" << value[i] << ":\t" << a << "%" << std::flush;
            pauseWait(1);
        }

        std::cout << std::endl;
    }


    return 0;
}