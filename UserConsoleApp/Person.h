#pragma once
#include <string>

class Person {
private:
	unsigned short idUser{};
	// Создаем общий счетчик для id пользователей

	static unsigned short nextUserId;

	std::string name;
	std::string lastName;
	unsigned short age{};
	bool isMarried;
	std::string city;
	std::string profession;
	std::string myMusic;
	uint16_t salary;

public:
	Person(
	//	unsigned short idUser,
		const std::string& name,
		const std::string& lastName = "",
		unsigned short age = 0, 
		bool isMarried = false, 
		const std::string& city = "",
		const std::string& profession = "",
		const std::string& myMusic = "",
		uint16_t salary = 0 ) :

		idUser(nextUserId++),
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
