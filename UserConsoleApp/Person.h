#pragma once
#include <string>

class Person {
private:
	unsigned short idUser{};
	std::string name;
	std::string lastName;
	unsigned short age{};
	bool isMarried;
	std::string city;
	std::string profession;
	std::string myMusic;

public:
	Person(
		unsigned short idUser,
		const std::string& name,
		const std::string& lastName = "",
		unsigned short age = 0, 
		bool isMarried = false, 
		const std::string& city = "",
		const std::string& profession = "",
		const std::string& myMusic = "") :

		idUser(id),
		name(name),
		lastName(lastName),
		age(age),
		isMarried(isMarried),
		city(city),
		profession(profession),
		myMusic(myMusic) {
	};

	void printInfoUser() const;
};
