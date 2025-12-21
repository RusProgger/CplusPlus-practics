#include "Person.h"
#include <iostream>
#include <string>

//Person::Person(const std::string& name, 
//	unsigned short age, 
//	bool isMarried, 
//	const std::string& city, 
//	const std::string& profession) :
//
//	name(name),
//	age(age),
//	isMarried(isMarried),
//	city(city),
//	profession(profession) {
//}

void Person::printInfoUser() const {
	constexpr int STARLENGTH = 50;
	std::cout << std::string(STARLENGTH, '*');


	std::cout << "\nИмя: " << name << std::endl;
	std::cout << "Фамилия: " << lastName << std::endl;
	std::cout << "Возраст: " << age << std::endl;
	std::cout << "Семейное положение: " << ((isMarried) ? "Да" : "Нет") << std::endl;
	std::cout << "Город проживания: " << city << std::endl;
	std::cout << "Профессия: " << profession<< std::endl;
	std::cout << "Любимая музыка: " << myMusic << std::endl;
	std::cout << "\n";
}