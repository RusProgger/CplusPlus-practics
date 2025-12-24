#include <iostream>
#include <string>
#include "Person.h"
#include "printBox.h"
#include <vector>

// Cчетчик id

unsigned short Person::nextUserId = 1;

// передача вектора по ссылке
void vectorUser(std::vector<Person>& users) {
	users.emplace_back("Андрей", "Иванов", 25, false, "Киев", "Охранник", "Рок", 23321);
	users.emplace_back("Иван",  "Захаров", 27, true, "Харьков", "Менеджер", "Rammstein");
	users.emplace_back("Николай", "Пушкарёв", 31, true, "Одесса", "Веб-разработчик", "Клубняк");
	users.emplace_back("Денис", "Марковский", 33, false, "Кировоград", "Программист", "Scooter");
	users.emplace_back("Максим", "Дяченко", 30, true, "Днепр", "Инженер", "Шансон");
	users.emplace_back("Марк", "Сидоренко", 38, false, "Киев", "Безработный ", "Шансон");
	users.emplace_back("Николай", "Михайленко", 26, true, "Ужгород", "Маркетолог ", "Попса");
}


//void mainWelcome() {
//	std::cout << "*********************************************************\n";
//	std::cout << "*                                                       *\n";
//	std::cout << "*                                                       *\n";
//	std::cout << "*               База данных пользователей               *\n";
//	std::cout << "*                                                       *\n";
//	std::cout << "*                                                       *\n";
//	std::cout << "*********************************************************\n";
//}


int main() {

	setlocale(LC_ALL, "russian");

	printBox("База данных пользователей", 30);


	std::vector<Person> users;
	vectorUser(users);

	for (const auto& user : users) {
		user.printInfoUser();
	}


	std::cout << "Нажмите Enter для выхода...";
	std::cin.get();

	return 0;
}