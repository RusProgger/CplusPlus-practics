#include <iostream>
#include <string>
#include "Person.h"
#include <vector>

// передача вектора по ссылке
void vectorUser(std::vector<Person>& users) {
	users.emplace_back("Андрей", 25, false, "Киев", "Охранник");
	users.emplace_back("Иван", 27, true, "Харьков", "Менеджер");
	users.emplace_back("Николай", 31, true, "Одесса", "Веб-разработчик");
	users.emplace_back("Денис", 33, false, "Кировоград", "Программист");
	users.emplace_back("Максим", 30, true, "Днепр", "Инженер");
}



int main() {
	
	setlocale(LC_ALL, "russian");

	std::vector<Person> users;
	vectorUser(users);

	for (const auto& user : users) {
		user.printInfoUser();
	}

	return 0;
}