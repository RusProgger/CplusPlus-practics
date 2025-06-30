include <iostream>
#include <string>
using namespace std;

int main() {
    // ввод напитка: "чай" или "кофе"
	string drink;
	cin >> drink;

	if (drink == "чай") 
	{
        // ввод типа чая: "черный" или "зеленый"
        string tea_type;
        cin >> tea_type;

        if (tea_type == "черный") 
		{
			cout << "Ваш черный чай готов";
		}
		if (tea_type == "зеленый") 
		{
			cout << "Ваш зеленый чай готов";
		}
	}

	if (drink == "кофе") 
	{
        // ввод типа кофе: "эспрессо" или "латте"
        string coffee_type;
        cin >> coffee_type; 

        if (coffee_type == "эспрессо") 
		{
			std::cout << "Ваш кофе эспрессо готов";
		}
		if (coffee_type == "латте") 
		{
			std::cout << "Ваш кофе латте готов";
		}        
	}
	
	return 0;
}
