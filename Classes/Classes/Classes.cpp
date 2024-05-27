#include <iostream>
#include <chrono>
#include <ctime>
#include <windows.h>




class TimeZone {
	public:
		std::string times() {

		// Получаем текущее время 
		auto now = std::chrono::system_clock::now();
		std::time_t now_time = std::chrono::system_clock::to_time_t(now);

		// Создаем буфер для времени
		char time_buffer[26];

		// Преобразуем время в строку в формате времени
		if (ctime_s(time_buffer, sizeof(time_buffer), &now_time) != 0) {
			return "Ошибка получения времени";
		}

		// Убираем символ новой строки в конце строки времени
		std::string time_str(time_buffer);
		time_str.pop_back();

		return time_str; // Возвращаем строку времени
	}
};

class User {

	public:
		void users() {
			std::cout << "Приветствую! Данная программа является бесплатной." << std::endl;
		}
};




int main() {

	std::locale::global(std::locale(""));

	TimeZone times;

	// создаем переменные для управления: 
	int numb, numb2, numb3;
	char keys = 'w';

	User users;
	users.users(); // приветствие пользователя: 
	std::cout << "Текущее время: " << times.times() << std::endl; // Текущее время:

	Sleep(1999);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

	std::cout << "Программа для сканирования и уничтожения данных из флешек." << std::endl;

	// Сброс по умолчанию
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


	// Создаем меню

	std::string menuTitle = "Меню";

	// Создаем ширину рамки, она будет оформлять наше меню

	int width = 30; // Ширина рамки в 30 пикселей

	int titlePadding = (width - menuTitle.length() - 2) / 2;

	// Верхняя граница рамки
	std::cout << std::string(width, '*') << std::endl;

	// Заголовок
	std::cout << '*';
	std::cout << std::string(titlePadding, ' ') << menuTitle << std::string(titlePadding, ' ');
	if (menuTitle.length() % 2 != 0) {
		std::cout << ' ';
	}
	std::cout << '*' << std::endl;

	// Нижняя граница рамки
	std::cout << std::string(width, '*') << std::endl;

	// сюда буду писать проект 

	return 0;
}