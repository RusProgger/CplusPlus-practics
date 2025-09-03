#include <iostream>
#include <random>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

int main() {

	std::locale::global(std::locale(""));

	int number = 0; // Для пользователя 

	// Создаем генератор случайных чисел
	std::mt19937 generator(time(0));
	std::uniform_int_distribution<> dist{1, 10};

	int random_number = dist(generator);

	/*std::cout << random_number << std::endl;*/


	do {
		std::cout << "Введите число: ";
		std::cin >> number;

		if (number > random_number) {
			std::cout << "Число слишком большое...\n";
		}
		else if(number < random_number) {
			std::cout << "Число слишком маленькое...\n";
		}

	} while (random_number != number);

#ifdef _WIN32
	system("pause");
#else
	std::cin.get();
#endif // _WIN32

	std::cin.get();
	return EXIT_SUCCESS;
}