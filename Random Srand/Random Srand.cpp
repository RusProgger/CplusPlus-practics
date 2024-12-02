#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::locale;

int main() {

	locale::global(locale(""));

	srand(time(0));


	cout << rand() % 10 << endl; // тогда данный результат вывода от 0 до 9




// создадим макрос для кроссплатформенности

#ifdef _WIN32

	system("pause");
	

#else 

	cin.get();

#endif // _WIN32


	return EXIT_SUCCESS;
}