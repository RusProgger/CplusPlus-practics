#include <iostream>

#define RESET "\033[0m"
#define GREEN   "\033[32m"
#define RED   "\033[31m"

int main() {

	std::locale::global(std::locale(""));

	// Загадаем число 

	int a = 10;
	int b;


	do {
		std::cout << "Введите число: ";
		

		// проверка на если пользователь ввел цифру

		if (!(std::cin >> b)) {
			std::cout << "Это не число!" << std::endl;

			// очищаем поток ввода
			std::cin.clear();

			// игнорируем символы в потоке

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			if (a != b) {
				// Тут выводим ответ если он не правильный
				std::cout << RED << "Ответ не правильный..." << RESET <<std::endl;
			}
		}


	} while (a != b);

	std::cout << GREEN << "Ваш ответ правильный! " << RESET << std::endl;
	std::cout << GREEN << "Молодец " << RESET << std::endl;


	// Задержка консоли на разных ОС

#ifdef _WIN32

	system("pause");  // Для Windows

#else
	std::cin.get();   // Для других ОС

#endif

	return 0;
}
