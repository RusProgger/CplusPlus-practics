#include <iostream>
#include <string>
#include "Person.h"
#include "printBox.h"
#include <vector>

// Cчетчик id

unsigned short Person::nextUserId = 1;

// передача вектора по ссылке
void vectorUser(std::vector<Person>& users) {
	users.emplace_back("Андрей", "Иванов", 25, false, "Киев", "Охранник", "Рок", 23311);
	users.emplace_back("Иван",  "Захаров", 27, true, "Харьков", "Менеджер", "Rammstein", 33893);
	users.emplace_back("Николай", "Пушкарёв", 31, true, "Одесса", "Веб-разработчик", "Клубняк", 40510);
	users.emplace_back("Денис", "Марковский", 33, false, "Кировоград", "Программист", "Scooter", 50215);
	users.emplace_back("Максим", "Дяченко", 30, true, "Днепр", "Инженер", "Шансон", 20110);
	users.emplace_back("Марк", "Сидоренко", 38, false, "Киев", "Безработный ", "Шансон", 0);
	users.emplace_back("Николай", "Михайленко", 26, true, "Ужгород", "Маркетолог ", "Попса", 25000);
	users.emplace_back("Юлия", "Внукова", 35, false, "Харьков", "Переводчик ", "Попса", 35000);
	users.emplace_back("Александр", "Ильяменко", 31, true, "Черкассы", "Военный ", "Шансон");
	users.emplace_back("Игорь", "Самойненко", 56, true, "Львов", "Электрик ", "Шансон");
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

	std::cout << "Всего пользователей: " << users.size() << "\n";


	std::cout << "Нажмите Enter для выхода...";
	std::cin.get();

	return 0;
}