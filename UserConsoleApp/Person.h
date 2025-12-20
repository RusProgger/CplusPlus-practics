#pragma once
#include <string>

class Person {
private:
	std::string name;
	std::string lastName;
	unsigned short age{};
	bool isMarried;
	std::string city;
	std::string profession;

public:
	Person(const std::string& name,
		const std::string& lastName,
		unsigned short age, 
		bool isMarried, 
		const std::string& city, 
		const std::string& profession,
		const std::string& myMusic) :

		name(name),
		age(age),
		isMarried(isMarried),
		city(city),
		profession(profession,) {
	}

	void printInfoUser() const;
};
