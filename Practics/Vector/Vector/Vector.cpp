#include <vector>
#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {

//	setlocale(LC_ALL, "russian");

	// Вместо setlocale

	locale::global(locale(""));

	string name[] = {"Ruslan", "Alex", "Dima", "Alena", "Julia", "Nikita"};

	for (auto i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
		cout << name[i] << endl;
	}

	



	system("pause");

	return 0;
}