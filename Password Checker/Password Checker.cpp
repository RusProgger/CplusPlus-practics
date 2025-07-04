#include <iostream>
#include <string>
#include <cctype>
#include <thread>
#include <chrono>
#include <locale>

// Подключает свой файл цветов для проекта

#include "colors.h";


int main() {

	// Лоакализация для русского языка

	std::locale::global(std::locale(""));

	

	std::string password;

	// Выводим сообщение пользователю

	std::cout << termcolor::on_blue << "Здравствуйте. Автор программы является Руслан Вороненко.\n" << termcolor::reset;
	std::cout << termcolor::on_bright_cyan << termcolor::red << "Дата релиза:  04/12/2024\n" << termcolor::reset;


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

	if ((numberCount > 1 && symbolCount < 2 && stringCount < 1)) {
		std::cout << termcolor::red << "Ваш пароль довольно слабый " << termcolor::reset<< std::endl;
	}

	else if (numberCount > 3 && symbolCount > 2 && stringCount > 3) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << termcolor::yellow << "Ваш пароль средний." << termcolor::yellow<< std::endl;
	}

	else if (numberCount > 4 && stringCount >= 2 ) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << termcolor::yellow << "Ваш пароль средний, но не хватает символов.." << termcolor::reset << std::endl;
	}

	else if (numberCount >= 5 && symbolCount >= 3 && stringCount > 4) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << termcolor::green << "Ваш пароль сложный." << termcolor::reset << std::endl;
	}

	else {
		std::this_thread::sleep_for(std::chrono::milliseconds(1200));
		std::cout << termcolor::magenta << "Ваш пароль не соотвествует никаким критериям сложности." << termcolor::reset << std::endl;
	}

	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << termcolor::cyan << "Спасибо за использование данной программы.\n" << termcolor::reset;



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

