#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter command: ";
    std::getline(std::cin, input);  // читаем всю строку целиком

    // Проверяем, оканчивается ли команда на ';'
    if(input.back() != ';') {
        std::cout << "Error!" << std::endl;
        return 0;
    }

    // Убираем точку с запятой в конце для анализа
    input = input.substr(0, input.size() - 1);

    std::string prefix = "consoleMessage(";
    if(input.substr(0, prefix.size()) == prefix && input.back() == ')') {
        // Получаем аргумент функции (внутри скобок)
        std::string argument = input.substr(prefix.size(), input.size() - prefix.size() - 1);

        // Если аргумент в кавычках — строка
        if(argument.front() == '"' && argument.back() == '"') {
            std::cout << argument.substr(1, argument.size() - 2) << std::endl;
        } else {
            // Пробуем преобразовать в число
            std::istringstream iss(argument);
            int intVal;
            float floatVal;

            if(iss >> intVal) {
                std::cout << intVal << std::endl;
            } else if(std::istringstream(argument) >> floatVal) {
                std::cout << floatVal << std::endl;
            } else {
                // Если не число, выводим как есть
                std::cout << argument << std::endl;
            }
        }

    } else {
        std::cout << "Invalid command" << std::endl;
    }

    return 0;
}
