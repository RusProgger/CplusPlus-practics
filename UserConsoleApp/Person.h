#pragma once
#include <string>

class Person {
private:
	std::string name;
	std::string last_name;
	unsigned short age{};
	bool isMarried;
	std::string city;
	std::string profession;

public:
	Person(const std::string& name, 
		unsigned short age, 
		bool isMarried, 
		const std::string& city, 
		const std::string& profession) :

		name(name),
		age(age),
		isMarried(isMarried),
		city(city),
		profession(profession) {
	}

	void printInfoUser() const;
};
