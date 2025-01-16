#include <iostream>
#include "colors.h"

int main() {

	std::locale::global(std::locale(""));
	
	double tempUserF; // Переменная для Фаренгейта
	double tempUserC; // Переменная для Цельсия
	
	// создаем переменные для выбора

	int tempUserNumb = 0;

	std::cout << termcolor::green << "\033[1mКонвертация температуры:\033[0m" << std::endl;
	// создаем форму выбора
	std::cout << "1 - Конвертация в Фаренгейт " << std::endl;
	std::cout << "2 - Конвертация в Цельсий " << std::endl;
	std::cout << "0 - Выйти из программы " << std::endl;

	std::cout << termcolor::reset;



	do {
		std::cout << "Выберите действие: ";
		std::cin >> tempUserNumb; 

		switch (tempUserNumb) {
		case 1: {
			
			// Запрашиваем пользователя ввести температуру в цельсиях

			std::cout << termcolor::green << "Введите температуру в цельсиях: ";
			std::cin >> tempUserC; // Ввод данных в цельсиях
			std::cout << termcolor::reset << std::endl;
			// формула расчета
			double resultTempUserF = (tempUserC * 9 / 5) + 32;

			std::cout << termcolor::bright_blue << "Фаренгейта: " << resultTempUserF << termcolor::reset << std::endl;
			break;
		   }
			
		  

		case 2: {
			std::cout << termcolor::green << "Введите температуру в фаренгейтах: ";
			std::cin >> tempUserF; // Ввод данных в цельсиях
			std::cout << termcolor::reset << std::endl;
			// формула расчета
			double resultTempUserC = (tempUserF - 32) * 5 / 9;

			std::cout << termcolor::bright_blue << "Цельсия: " << resultTempUserC << termcolor::reset << std::endl;
			break;
		  }
		
		default:
			std::cout << termcolor::red << "Неверный выбор..Попробуйте еще раз!\n" << termcolor::reset;
			break;

		} // end switch case



	} while (tempUserNumb != 0);

	
	system("pause");
	return 0;

}