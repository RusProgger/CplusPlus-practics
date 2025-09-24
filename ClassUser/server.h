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
        int ipAdress;

    void ServerInformation() {
        
        std::cout << "Server: " << std::setw(5) << serverInfo << std::endl;
        std::cout << "IpAdress : " << std::setw(5) << ipAdress << std::endl;
    }

};


#endif