#include <iostream>


int main() {
	// Локализация
	std::locale::global(std::locale(""));

	// Просим ввод пользователя

	// loop enter symbol: 
	do {
		char symbol;
		std::cout << "Введите символ с клавиатуры: ";
		// Просим пользователя вести символ
		std::cin >> symbol;

		std::cout << "Ваш код символа: " << static_cast<int>(symbol) << std::endl;
	} while (true);

	

	return EXIT_SUCCESS;
}
