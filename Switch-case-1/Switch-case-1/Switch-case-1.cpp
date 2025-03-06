//#include <iostream>
//
//
//enum Week {
//
//	Monday = 1,
//	Tuesday,
//	Wednesday,
//	Thursday,
//	Friday,
//	Saturday,
//	Sunday
//
//};
//
//int main() {
//
//	std::locale::global(std::locale(""));

//	int numb;
//
//	std::cout << "Введите число 1 - 7: ";
//
//	std::cin >> numb;
//
//	switch (numb) {
//	case 1:
//		std::cout << Monday << std::endl;
//		break;
//	case Week::Tuesday:
//		std::cout << "Tuesday" << std::endl;
//		break;
//	case Week::Wednesday:
//		std::cout << "Wednesday" << std::endl;
//		break;
//	default:
//		std::cout << "Not a number" << std::endl;
//	}
//	
//
//	return 0;
//}

#include <iostream>

enum Week {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    std::setlocale(LC_ALL, "");  


    for(;;) {
        
        int numb;
        std::cout << "Введите число (1-7): ";
        std::cin >> numb;

        // Проверяем, входит ли число в диапазон 1-7
        if (numb < Monday || numb > Sunday) {
            std::cout << "Некорректный ввод! Введите число от 1 до 7." << std::endl;
            return 1;  // Завершаем программу с кодом ошибки
        }

        // Определяем день недели
        switch (numb) {
        case Monday:
            std::cout << "Понедельник" << std::endl;
            break;
        case Tuesday:
            std::cout << "Вторник" << std::endl;
            break;
        case Wednesday:
            std::cout << "Среда" << std::endl;
            break;
        case Thursday:
            std::cout << "Четверг" << std::endl;
            break;
        case Friday:
            std::cout << "Пятница" << std::endl;
            break;
        case Saturday:
            std::cout << "Суббота" << std::endl;
            break;
        case Sunday:
            std::cout << "Воскресенье" << std::endl;
            break;
        default:
            std::cout << "Ошибка!" << std::endl;
        }

        if (numb == 0) {
            break;
        }
    
    }

    

    return 0;
}
