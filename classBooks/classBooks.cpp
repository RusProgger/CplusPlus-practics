#include <iostream>
#include <string>

class Books {
	public:
		int year;
		std::string type;

		void get_info() {
			std::cout << "Название: " << type << ". Год: " << year << "\n";
		}
};


int main()
{
   
	std::locale::global(std::locale(""));

	Books programming;
	programming.type = "Системное программирование";
	programming.year = 2019;

	programming.get_info();

}

