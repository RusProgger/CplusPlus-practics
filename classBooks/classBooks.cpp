#include <iostream>
#include <string>
#include <locale>

class Books {
	private: 
		int year;
		std::string type;
	public:
		
		void get_result(int a, std::string n) {
			year = a;
			type = n;
		}

		void get_info() {
			std::cout << "Название: " << type << ". Год: " << year << "\n";
		}
};


int main()
{
   	// locale Ru
	std::locale::global(std::locale(""));

	Books programming;
	/*programming.type = "Системное программирование";
	programming.year = 2019;*/
	programming.get_result(2020, "Системное программирование");
	/*programming.get_info();*/

	return 0;

}

