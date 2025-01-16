#include <iostream>
#include "colors.h"

int main() {

	std::locale::global(std::locale(""));
	
	double tempUserF; // Переменная для Фаренгейта
	double tempUserC; // Переменная для Цельсия
	

	// Запрашиваем пользователя ввести температуру в цельсиях

	std::cout << termcolor::green << "Введите температуру в цельсиях: ";
	std::cin >> tempUserC; // Ввод данных в цельсиях

	// Сброс цвета консоли 

	std::cout << termcolor::reset << std::endl;

	// Формула расчета: F = 9 / 5 * С + 32

	double resultTempUserF = (tempUserC * 9 /5 ) + 32;

	std::cout << termcolor::bright_blue << "Фаренгейта: " << resultTempUserF << termcolor::reset << std::endl;


	system("pause");
	return 0;

}