#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>
#include <iomanip>

// Подключаем библиотеку для работы с временем
#include <chrono>
// Подключаем библиотеку для работы с многопоточностью
#include <thread>

class Server {

    public:
        std::string serverInfo;
        std::string ipAddress;

    void ServerInformation() {
        // Добавление задержки
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "Server: " << std::setw(5) << serverInfo << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "ipAddress : " << std::setw(5) << ipAddress << std::endl;
    }

};


#endif