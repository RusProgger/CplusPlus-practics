#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
#include "color.h"


// Проверка на ввод коректный данных 

bool PlayerName(const std::string& str) {
	for (char ch : str) {
		if (!std::isalpha(static_cast<unsigned char>(ch))) {
			return false;
		}
	}
	return true;
}

// Главное меню

void MainMenu() {
	std::cout << std::endl;
	std::cout << termcolor::bright_cyan << "-----------Главное меню-----------" << termcolor::reset << std::endl;
	std::cout << std::endl;

	std::cout << termcolor::bright_cyan << "1 - Начать игру:" << termcolor::reset << std::endl;
	std::cout << termcolor::bright_cyan << "2 - Выйти:" << termcolor::reset << std::endl;
}

int main() {

	// Локализация
	std::locale::global(std::locale(""));

	
	int enterNumber; // для меню
	int counter = 0;
	std::string name; // Для ввода имени

	// Приветствие
	std::cout << termcolor::bright_cyan << "Добро пожаловать в игру EllitGroups." << termcolor::reset << std::endl;
	std::cout << termcolor::bright_cyan << "Вы элитный боец спецназа. Ваша задача найти и уничтожить кейс с документами." << termcolor::reset << std::endl;


	// цикл для повторного ввода имени

	while (true) {

		// Запрашиваем имя: 

		std::cout << termcolor::green << "Введите ваше имя: ";
		std::getline(std::cin, name);

		// Проверка 

		if (PlayerName(name)) {
			std::cout << termcolor::green << "Привет, " << name << termcolor::reset << std::endl;

			// mainmenu будет появляться после того как пользователь прошел проверку на ввод правильных данных

			MainMenu();
			std::cin >> enterNumber;
			switch (enterNumber) {
			case 1: 
				std::cout << "Вы внедряетесь в корпорацию, и ваша задача уничтожить документы что вы сделаете?\n";

				// список ответов
				break;

			case 2:
				std::cout << termcolor::red << "Вы завершили игру, ваш счет: " << counter << std::endl;
				break;
			}
			




			break;
		}
		else {
			std::cout << termcolor::red << "Ошибка: имя должно содержать только буквы!" << termcolor::reset << std::endl;
			
		}

	}



	system("pause > 0");
	return 0;
}