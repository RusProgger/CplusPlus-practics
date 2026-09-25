#include <iostream>
#include <string>
// Ïîäêëþ÷àåì ñòåê
#include <stack>
// Ïîäêëþ÷àåì vector (âåêòîð)
#include <vector>
// Ïîäêëþ÷àåì locale (Ëîêàëèçàöèþ)
#include <locale>


using std::stack;
using std::endl;
using std::vector;
using std::cin;
using std::cout;

int main() {

	/*setlocale(LC_ALL, "Russian");*/

	std::locale::global(std::locale(""));

	vector<int> number;

	// äîáàâëÿåì âåêòîð

	//number.push_back(1);
	//number.push_back(10);
	//number.push_back(50);
	//number.push_back(100);

	// Ñîçäàåì öèêë äëÿ âûâîäà åëåìåíòîâ âåêòîðà

	//for (auto numb : number) {
	//	cout << "Ñïèñîê ýëåìåíòîâ âåêòîðà: " << numb << endl; // âûâîäèì åëåìåíòû
	//}

	vector <std::string> user;

	vector <std::string> lastUser(5, "Alex");

	cout << lastUser.size() << endl;

	int a = 0;

	while (a < lastUser.size()) {
		cout << lastUser[a] << endl;
		a++;
	}

	user.push_back("Ruslan");
	user.push_back("Alex");
	user.push_back("Dmitrii");

	// ìåòîä pop_back óäàëÿåò ïîñëåäíèé ýëåìåíò â âåêòîðå (âûçûâàåòñÿ áåç ïàðàìåòðîâ)

	user.pop_back();
	user.pop_back();
	user.pop_back();

	cout << "Íàø âåêòîð èìååò " << user.size() <<  " åëåìåíòà" << endl;

	for (int i = 0; i < user.size(); i++) {
		cout << user[i] << endl;
	}

	cout << "******************************************" << endl;
	cout << "******************************************" << endl;

	vector<std::string> vectors_2 = user;

	if (!vectors_2.empty()) {

		cout << vectors_2.size() << endl;
	}
	else {
		cout << "Âåêòîð ïóñò:" << endl;
	}

	

	std::cin.get();
	return 0;
}
