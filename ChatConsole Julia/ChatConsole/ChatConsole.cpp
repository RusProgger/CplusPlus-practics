// ChatConsole
// Author: Ruslan Voronenko
// Date: 03.03.2025
// Version: 1.0.0.1

#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include <thread>
#include <chrono>


// Подключение библиотеки TermColor

#include "termcolor.h"
#include "chat.h"

int main() {
	// Locale rus
	system("chcp 1251"); 
	// Locale для русского языка (Windows)
	setlocale(LC_ALL, "Russian_Russia.1251");

	std::cout << termcolor::green << "Привет это демо версия текстового чата: " << termcolor::reset << std::endl;

	std::string inputText;

	std::cout << termcolor::green << "Чем я могу быть полезна? " << termcolor::reset << std::endl;
	std::cout << termcolor::green << "----------------------- " << termcolor::reset << std::endl;
	
	do {
		std::cout << termcolor::green << "Введите ваш запрос: " << termcolor::reset;


		// Запрашиваем запрос у пользователя
		std::getline(std::cin, inputText);
		// Выводим результат от пользвоателя
		MyChat::InputUserChat(inputText);
		std::this_thread::sleep_for(std::chrono::seconds(1));

		MyChat::InputJuliaChat(inputText);


		

	} while (inputText != "exit");
	





	system("pause");

	return 0;
}

