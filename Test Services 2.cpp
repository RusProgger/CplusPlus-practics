#include <iostream>
#include <string>
// Подключаем стек
#include <stack>
// Подключаем vector (вектор)
#include <vector>
// Подключаем locale (Локализацию)
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

	// добавляем вектор

	//number.push_back(1);
	//number.push_back(10);
	//number.push_back(50);
	//number.push_back(100);

	// Создаем цикл для вывода елементов вектора

	//for (auto numb : number) {
	//	cout << "Список элементов вектора: " << numb << endl; // выводим елементы
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

	// метод pop_back удаляет последний элемент в векторе (вызывается без параметров)

	user.pop_back();
	user.pop_back();
	user.pop_back();

	cout << "Наш вектор имеет " << user.size() <<  " елемента" << endl;

	for (int i = 0; i < user.size(); i++) {
		cout << user[i] << endl;
	}

	cout << "******************************************" << endl;

	vector<std::string> vectors_2 = user;

	if (!vectors_2.empty()) {

		cout << vectors_2.size() << endl;
	}
	else {
		cout << "Вектор пуст:" << endl;
	}

	


	return 0;
}