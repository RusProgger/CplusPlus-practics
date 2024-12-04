#include <iostream>
#include <string>
#include <cctype>
#include <thread>
#include <chrono>

// Подключает свой файл цветов для проекта

#include "colors.h";




int main() {

	// Лоакализация для русского языка

	std::locale::global(std::locale(""));

	// создаем переменную для ввода пароля

	std::string password;

	// Вводим пароль 

	std::cout << "Введите ваш пароль для проверки сложности: ";
	std::getline(std::cin, password);

	// Создаем переменные для проверки пароля
	// 1. - numberCount - отвечает за ввод цифр
	// 2. - stringCount - отвечает за ввод срок
	// 3. - symbolCount - отвечает за ввод символов

	int numberCount = 0;
	int stringCount = 0;
	int symbolCount = 0;

	// Условия для пользователя проходим по циклу по кадому символу

	for (char c : password) {
		if (isdigit(c)) {
			numberCount++;
		}

		else if (isalpha(c)) {
			stringCount++;
		}

		else if (ispunct(c)) {
			symbolCount++;
		}

		else if (isspace(c)) {
			std::cout << "Пароль не должен содержать пробелы...\n";
		}
	}

	// Логика обработки сложности пароля

	if (numberCount <= 3 && symbolCount < 2 && stringCount < 1) {
		std::cout << RED << "Ваш пароль довольно слабый " << RESET << std::endl;
	}

	else if (numberCount > 4 && symbolCount >= 2 && stringCount >= 1) {
		std::cout << YELLOW << "Ваш пароль средний." << RESET << std::endl;
	}

	else if (numberCount > 4 && stringCount >= 2) {
		std::cout << YELLOW << "Ваш пароль средний, но не хватает символов.." << RESET << std::endl;
	}

	else if (numberCount > 5 && symbolCount > 3 && stringCount > 4) {
		std::cout << GREEN << "Ваш пароль сложный." << RESET << std::endl;
	}

	else {
		std::cout << LightMagenta << "Ваш пароль не соотвествует никаким критериям сложности." << RESET << std::endl;
	}

	std::cout << BOLDGREEN << "Спасибо за использование данной программы.\n" << RESET;

	// Создадим макрос для кроссплатформенности для Windows систем и Linux систем а также MacOS

#ifdef _WIN32
	// Для операционной системы windows
	system("pause");

	// Для операционной системы Linux и MacOS
#else
	std::cin.get();
#endif // _WIN32



	return EXIT_SUCCESS;
}

