#include <iostream>
#include <string>

int main() {
    // ввод напитка: "чай" или "кофе"
	std::string drink;
	std::cin >> drink;

	if (drink == "чай") 
	{
        // ввод типа чая: "черный" или "зеленый"
        std::string tea_type;
        std::cin >> tea_type;

        if (tea_type == "черный") 
		{
			cout << "Ваш черный чай готов";
		}
		if (tea_type == "зеленый") 
		{
			cout << "Ваш зеленый чай готов";
		}
	}
	// Условие 
	if (drink == "кофе") 
	{
        // ввод типа кофе: "эспрессо" или "латте"
        std::string coffee_type;
        std::cin >> coffee_type; 

        if (coffee_type == "эспрессо") 
		{
			std::cout << "Ваш кофе эспрессо готов";
		}
		if (coffee_type == "латте") 
		{
			std::cout << "Ваш кофе латте готов";
		}        
	}
	std::cin.get();
	return 0;
}
