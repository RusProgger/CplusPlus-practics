#include <iostream>
#include <string>
#include "Person.h"
#include <vector>

// передача вектора по ссылке
void vectorUser(std::vector<Person>& users) {
	users.emplace_back("Андрей", "Иванов", 25, false, "Киев", "Охранник", "Рок");
	users.emplace_back("Иван",  "Захаров", 27, true, "Харьков", "Менеджер", "Rammstein");
	users.emplace_back("Николай", "Пушкарёв", 31, true, "Одесса", "Веб-разработчик", "Клубняк");
	users.emplace_back("Денис", "Марковский", 33, false, "Кировоград", "Программист", "Scooter");
	users.emplace_back("Максим", "Дяченко", 30, true, "Днепр", "Инженер", "Шансон");
}



int main() {
	
	setlocale(LC_ALL, "russian");

	std::vector<Person> users;
	vectorUser(users);

	for (const auto& user : users) {
		user.printInfoUser();
	}


	std::cout << "Нажмите Enter для выхода...";
	std::cin.get();

	return 0;
}