#pragma once
#include <iostream>
#include <string>
#include <algorithm> 

// Функция для удаления пробелов в начале и конце строки
std::string Trim(const std::string& str) {
	size_t first = str.find_first_not_of(" \t");
	if (first == std::string::npos) return "";
	size_t last = str.find_last_not_of(" \t");
	return str.substr(first, last - first + 1);
}

namespace MyChat {

	void InputUserChat(const std::string& userInputText ) {
		std::cout << "Ваш запрос: " << userInputText << std::endl;
	}

	void InputJuliaChat(std::string JuliaInputText) {

		JuliaInputText = Trim(JuliaInputText);


		if (JuliaInputText == "Привет") {
			std::cout << termcolor::green << "Julia: Привет! Чем я могу помочь?" << termcolor::reset << std::endl;
		}

		else if (JuliaInputText == "Помоги мне с программированием" || JuliaInputText == "помоги мне с программированием") {
			std::cout << termcolor::green << "Julia: Окей. Какие темы из программирования тебя интересуют?" << termcolor::reset << std::endl;
		}

		else if (JuliaInputText == "Ты кто?" || JuliaInputText == "кто ты?" || JuliaInputText == "кто ты" || JuliaInputText == "ты кто?" || JuliaInputText == "кто ты есть?" || JuliaInputText == "Кто ты такая?") {
			std::cout << termcolor::green << "Julia: Я виртуальный мини-помощник." << termcolor::reset << std::endl;
		}

		else if (JuliaInputText == "Кто основатель?" || JuliaInputText == "кто основатель?" || JuliaInputText == "кто тебя создал" || JuliaInputText == "кто тебя создал?" || JuliaInputText == "Кто тебя создал?" || JuliaInputText == "Кто тебя сделал?" || JuliaInputText == "Кто тебя разработал?") {
			std::cout << termcolor::green << "Julia: Меня разработал программист из Украины, Руслан Вороненко. Он же является автором." << termcolor::reset << std::endl;
		}

		else if (JuliaInputText == "Кто такая Julia?" || JuliaInputText == "расскажи о себе?" || JuliaInputText == "кто такая julia?" || JuliaInputText == "что за мини чат?" || JuliaInputText == "Julia расскажи о себе" || JuliaInputText == "julia расскажи о себе") {
			std::cout << termcolor::green << "Julia: Я Julia. Я виртуальный помощник, помогаю с простыми вопросами.\nЯ создана для того чтобы облегчить работу программистов и людей.\nЯ написана на языке С++ с мини искусственным интеллектом." << termcolor::reset << std::endl;
		}

		else {
			std::cout <<termcolor::red << "Julia: Извините неверный запрос. Повторите попытку..." << termcolor::reset << std::endl;
		}
	}
}