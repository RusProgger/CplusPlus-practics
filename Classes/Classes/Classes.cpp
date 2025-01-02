#include <iostream>
#include <chrono>
#include <ctime>
#include <windows.h>




class TimeZone {
	public:
		std::string times() {

		// Ïîëó÷àåì òåêóùåå âðåìÿ 
		auto now = std::chrono::system_clock::now();
		std::time_t now_time = std::chrono::system_clock::to_time_t(now);

		// Ñîçäàåì áóôåð äëÿ âðåìåíè
		char time_buffer[26];

		// Ïðåîáðàçóåì âðåìÿ â ñòðîêó â ôîðìàòå âðåìåíè
		if (ctime_s(time_buffer, sizeof(time_buffer), &now_time) != 0) {
			return "Îøèáêà ïîëó÷åíèÿ âðåìåíè";
		}

		// Óáèðàåì ñèìâîë íîâîé ñòðîêè â êîíöå ñòðîêè âðåìåíè
		std::string time_str(time_buffer);
		time_str.pop_back();

		return time_str; // Âîçâðàùàåì ñòðîêó âðåìåíè
	}
};
// class User public
class User {
	
	public:
		void users() {
			std::cout << "Ïðèâåòñòâóþ! Äàííàÿ ïðîãðàììà ÿâëÿåòñÿ áåñïëàòíîé." << std::endl;
		}
};




int main() {

	std::locale::global(std::locale(""));

	TimeZone times;

	// ñîçäàåì ïåðåìåííûå äëÿ óïðàâëåíèÿ: 
	int numb, numb2, numb3;
	// char integer
	char keys = 'w';

	User users;
	users.users(); // ïðèâåòñòâèå ïîëüçîâàòåëÿ: 
	std::cout << "Òåêóùåå âðåìÿ: " << times.times() << std::endl; // Òåêóùåå âðåìÿ:

	Sleep(1999);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

	std::cout << "Ïðîãðàììà äëÿ ñêàíèðîâàíèÿ è óíè÷òîæåíèÿ äàííûõ èç ôëåøåê." << std::endl;

	// Ñáðîñ ïî óìîë÷àíèþ
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


	// Ñîçäàåì ìåíþ

	std::string menuTitle = "Ìåíþ";

	// Ñîçäàåì øèðèíó ðàìêè, îíà áóäåò îôîðìëÿòü íàøå ìåíþ

	int width = 30; // Øèðèíà ðàìêè â 30 ïèêñåëåé

	int titlePadding = (width - menuTitle.length() - 2) / 2;

	// Âåðõíÿÿ ãðàíèöà ðàìêè
	std::cout << std::string(width, '*') << std::endl;

	// Çàãîëîâîê
	std::cout << '*';
	std::cout << std::string(titlePadding, ' ') << menuTitle << std::string(titlePadding, ' ');
	if (menuTitle.length() % 2 != 0) {
		std::cout << ' ';
	}
	std::cout << '*' << std::endl;

	// Íèæíÿÿ ãðàíèöà ðàìêè
	std::cout << std::string(width, '*') << std::endl;

	// ñþäà áóäó ïèñàòü ïðîåêò 

	return 0;
}
